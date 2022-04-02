#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "parse.h"
#include "instruction.h"
#include "arrlen.h"
bool cc = false;

int main(int argc, char **argv) {
	FILE* file;
	if(argc == 1) {
usage:
        printf("Usage: ual in.ual (flags)\n");
        printf("Available flags:\n-c: saves cross-compiled code into ualo.c\n");
        return 1;
	}
	if(argc == 2) {
        file = fopen(argv[1], "rb");
        if (file == NULL) {
            printf("Error in opening file\n");
            goto usage;
            return 1;
        }
	} 
	if (argc == 3) {
		cc = true;
        file = fopen(argv[2], "rb");
        if (file == NULL) {
            printf("Error in opening file\n");
            return 1;
        }
	}
    uint8_t prog[0xFFFF];
    fread(prog, 1, 0xFFFF, file);
    fclose(file);
}
