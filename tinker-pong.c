#include <stdio.h>
#include <unistd.h>

#include "bindings/ip_connection.h"
#include "bindings/bricklet_joystick.h"
#include "bindings/bricklet_lcd_20x4.h"

#define HOST             "localhost"
#define PORT             4223
#define UID_PLAYER_LEFT  "9J5"
#define UID_PLAYER_RIGHT "9Jw" 
#define UID_LCD          "9KU" 

#define LCD_X_MIN 0
#define LCD_X_MAX 19
#define LCD_Y_MIN 0
#define LCD_Y_MAX 3

#define LCD_BACKGROUND         " "
#define LCD_PLAYER_BAR         "I"
#define LCD_PLAYER_LEFT_CATCH  "<"
#define LCD_PLAYER_RIGHT_CATCH ">"
#define LCD_BALL               "o"

IPConnection ipcon;

Joystick player_left, player_right;
LCD20x4 lcd;

int stop = 0;

int ball_x  = 10;
int ball_y  = 2;
int ball_vx = 1;
int ball_vy = 1;

int pl_x = 0;
int pl_y = 0;
int pl_p = 0;

int pr_x = 19;
int pr_y = 0;
int pr_p = 0;

void lcd_btn_callback(uint8_t btn_id)
{
    bool backlight_state;

    lcd_20x4_is_backlight_on(&lcd, &backlight_state);

    switch(btn_id) {
        case 0:
            if(backlight_state)
                lcd_20x4_backlight_off(&lcd);
            else
                lcd_20x4_backlight_on(&lcd);
            break;

        case 1:
            break;

        case 2:
            stop = 1;
            break;
    }
}

void player_left_move(int16_t x, int16_t y)
{
    if(y < 0) {
        if(pl_y < LCD_Y_MAX) {
            lcd_20x4_write_line(&lcd, pl_y, pl_x, LCD_BACKGROUND);
            pl_y++;
            lcd_20x4_write_line(&lcd, pl_y, pl_x, LCD_PLAYER_BAR);
        }
        return;
    }

    if(pl_y > LCD_Y_MIN) {
        lcd_20x4_write_line(&lcd, pl_y, pl_x, LCD_BACKGROUND);
        pl_y--;
        lcd_20x4_write_line(&lcd, pl_y, pl_x, LCD_PLAYER_BAR);
    }
}

void player_right_move(int16_t x, int16_t y)
{
    if(y < 0) {
        if(pr_y < LCD_Y_MAX) {
            lcd_20x4_write_line(&lcd, pr_y, pr_x, LCD_BACKGROUND);
            pr_y++;
            lcd_20x4_write_line(&lcd, pr_y, pr_x, LCD_PLAYER_BAR);
        }
        return;
    }

    if(pr_y > LCD_Y_MIN) {
        lcd_20x4_write_line(&lcd, pr_y, pr_x, LCD_BACKGROUND);
        pr_y--;
        lcd_20x4_write_line(&lcd, pr_y, pr_x, LCD_PLAYER_BAR);
    }
}

void player_left_pressed(void)
{
    return;
}

void player_right_pressed(void)
{
    return;
}

void cb_enumerate(char *uid, char *name, uint8_t stack_id, bool is_new) {
    if(is_new) {
        printf("New device:\n");
    } else {
        printf("Removed device:\n");
    }

    printf(" Name:     %s\n", name);
    printf(" UID:      %s\n", uid);
    printf(" Stack ID: %d\n", stack_id);
    printf("\n");
}

void print_score(void)
{
    char score[6];
    int ret;

    ret = snprintf(score, 6, "%02d:%02d", pl_p, pr_p);
    if(ret < 0) {
        perror("failed to create score");
        exit(1);
    }
    lcd_20x4_write_line(&lcd, 0, 7, score);
}

int get_random_vy(int vy)
{
    if(rand() % 2)
        return (vy&1) - 1;

    return -(vy&1) + 1 - vy;
}

void move_ball(void)
{
    ball_y = ball_y + ball_vy;
    if(ball_y > 3) {
        ball_y = 2;
        ball_vy = -1;
    } else if(ball_y < 0) {
        ball_y = 1;
        ball_vy = 1;
    }

    ball_x = ball_x + ball_vx;
    if(ball_x > 17) {
        if(pr_y == ball_y) {
            ball_vx = -1;
            ball_vy = get_random_vy(ball_vy);
        } else {
            // tooooor
            pl_p++;
            ball_x = 10;
            ball_y = 2;
            print_score();
        }
    } else if(ball_x < 2) {
        if(pl_y == ball_y) {
            ball_vx = 1;
            ball_vy = get_random_vy(ball_vy);
        } else {
            // tooooor
            pr_p++;
            ball_x = 10;
            ball_y = 2;
            print_score();
        }
    }

    fprintf(stderr, "line=%d, pos=%d\n", ball_y, ball_x);
}

void print_winscreen(void)
{
    char *oben  = "********************";
    char *mitte = "*       WIN!       *";
    char *unten = "********************";

    lcd_20x4_write_line(&lcd, 1, 0, oben);
    lcd_20x4_write_line(&lcd, 2, 0, mitte);
    lcd_20x4_write_line(&lcd, 3, 0, unten);
}

void cleanup(void)
{
    ipcon_destroy(&ipcon);
}

int main(void) {
    int ox;
    int oy;

    if(ipcon_create(&ipcon, HOST, PORT) < 0) {
        fprintf(stderr, "Could not create connection\n");
        exit(1);
    }

    // Enumerate Bricks and Bricklets
    ipcon_enumerate(&ipcon, cb_enumerate);

    joystick_create(&player_left, UID_PLAYER_LEFT);
    if(ipcon_add_device(&ipcon, &player_left) < 0) {
        fprintf(stderr, "Could not connect to joystick bricklet of left player\n");
        exit(1);
    }
    joystick_register_callback(&player_left, JOYSTICK_CALLBACK_POSITION_REACHED, player_left_move);
    joystick_set_position_callback_period(&player_left, 100);
    joystick_set_position_callback_threshold(&player_left, 'o', -100, 100, -80, 80);
    joystick_set_debounce_period(&player_left, 250);
    joystick_register_callback(&player_left, JOYSTICK_CALLBACK_PRESSED, player_left_pressed);

    joystick_create(&player_right, UID_PLAYER_RIGHT);
    if(ipcon_add_device(&ipcon, &player_right) < 0) {
        fprintf(stderr, "Could not connect to joystick bricklet of right player\n");
        exit(1);
    }
    joystick_register_callback(&player_right, JOYSTICK_CALLBACK_POSITION_REACHED, player_right_move);
    joystick_set_position_callback_period(&player_right, 100);
    joystick_set_position_callback_threshold(&player_right, 'o', -100, 100, -80, 80);
    joystick_set_debounce_period(&player_right, 250);
    joystick_register_callback(&player_right, JOYSTICK_CALLBACK_PRESSED, player_right_pressed);

    lcd_20x4_create(&lcd, UID_LCD);
    if(ipcon_add_device(&ipcon, &lcd) < 0) {
        fprintf(stderr, "Could not connect to lcd bricklet\n");
        exit(1);
    }
    lcd_20x4_register_callback(&lcd, LCD_20X4_CALLBACK_BUTTON_PRESSED, lcd_btn_callback);
    lcd_20x4_backlight_on(&lcd);
    lcd_20x4_clear_display(&lcd);

    lcd_20x4_write_line(&lcd, pl_y, pl_x, LCD_PLAYER_BAR);
    lcd_20x4_write_line(&lcd, pr_y, pr_x, LCD_PLAYER_BAR);
    lcd_20x4_write_line(&lcd, ball_y, ball_x, LCD_BALL);

    print_score();

    atexit(cleanup);

    while(!stop) {
        ox = ball_x;
        oy = ball_y;

        move_ball();

        lcd_20x4_write_line(&lcd, oy, ox, LCD_BACKGROUND);
        if(ox >= 7 && ox <= 11 && oy == 0) {
            fputs("..:: SCORE ::..\n", stderr);
            print_score();
        }
        lcd_20x4_write_line(&lcd, ball_y, ball_x, LCD_BALL);

        if(pl_p == 10 || pr_p == 10) {
            print_winscreen();
            break;
        }

        usleep(250000);
    }

    return 0;
}
