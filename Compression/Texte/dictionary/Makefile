# Makefile

CC=gcc #-fsanitize=address -g3 -fsanitize-recover=address -g3
CPPFLAGS= -MMD -D_XOPEN_SOURCE=500
CFLAGS= -Wall -Wextra -std=c99 -O2
LDFLAGS=
LDLIBS=

# You should at least create the "insert_sort.c"
# and "insert_sort.h" files in order to compile.
# (These files can be empty.)

SRC= lzw.c main.c bitwise.c
OBJ= ${SRC:.c=.o}
DEP= ${SRC:.c=.d}

all: main

-include ${DEP}

main: ${OBJ}

clean:
	rm -f ${OBJ} ${DEP} main
