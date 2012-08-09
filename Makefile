CC      = gcc
CFLAGS  = -Wall -g -std=c99
LDFLAGS = -lpthread

DESTDIR=

PREFIX=/usr
BINDIR=${PREFIX}/bin

TINKERPONG_BIN = tinker-pong

TINKERPONG_OBJ = tinker-pong.o tf_ip_connection.o tf_bricklet_lcd_20x4.o tf_bricklet_joystick.o

quiet-command = $(if ${V},${1},$(if ${2},@echo ${2} && ${1}, @${1}))
quiet-install = $(call quiet-command,install -m ${1} ${2} ${3},"INSTALL	${3}")
quiet-installdir = $(call quiet-command,install -m ${1} -d ${2},"MKDIR	${2}")

all: build

build: ${TINKERPONG_BIN}

tinker-pong: ${TINKERPONG_OBJ}
	$(call quiet-command, ${CC} ${LDFLAGS} -o $@ $^, "LD	$@")

%.o: %.c
	$(call quiet-command, ${CC} ${CFLAGS} -c $<, "CC	$@")

tf_%.o: $(addprefix bindings/, %.c)
	$(call quiet-command, ${CC} ${CFLAGS} -c -o $@ $<, "CC	$@")

clean:
	$(call quiet-command, rm -f ${TINKERPONG_BIN}, "RM	${TINKERPONG_BIN}")
	$(call quiet-command, rm -f ${TINKERPONG_OBJ}, "RM	${TINKERPONG_OBJ}")
