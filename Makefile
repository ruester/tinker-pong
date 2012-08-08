CC      = gcc
CFLAGS  = -Wall -g
LDFLAGS = -lpthread

DESTDIR=

PREFIX=/usr
BINDIR=${PREFIX}/bin

PONG_BIN = pong

PONG_OBJ = pong.o tf_ip_connection.o tf_bricklet_lcd_20x4.o tf_bricklet_joystick.o

quiet-command = $(if ${V},${1},$(if ${2},@echo ${2} && ${1}, @${1}))
quiet-install = $(call quiet-command,install -m ${1} ${2} ${3},"INSTALL	${3}")
quiet-installdir = $(call quiet-command,install -m ${1} -d ${2},"MKDIR	${2}")

all: build

build: ${PONG_BIN}

pong: ${PONG_OBJ}
	$(call quiet-command, ${CC} ${LDFLAGS} -o $@ $^, "LD	$@")

%.o: %.c
	$(call quiet-command, ${CC} ${CFLAGS} -c $<, "CC	$@")

tf_%.o: $(addprefix bindings/, %.c)
	$(call quiet-command, ${CC} ${CFLAGS} -c -o $@ $<, "CC	$@")

clean:
	$(call quiet-command, rm -f ${PONG_BIN}, "RM	${PONG_BIN}")
	$(call quiet-command, rm -f ${PONG_OBJ}, "RM	${PONG_OBJ}")
