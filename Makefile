.POSIX:

CC = tcc
CFLAGS = -Wall -Wunsupported -std=c90
OBJ = main.o parse.o

all: ual

ual: $(OBJ)
	$(CC) $(CFLAGS) -o ual $(OBJ)
	
main.o: main.c parse.o
parse.o: parse.c parse.h instruction.h arrlen.h

clean:
	rm -f ual $(OBJ)
	
.PHONY: all clean
