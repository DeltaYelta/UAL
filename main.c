#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "parse.h"
#include "instruction.h"
#include "arrlen.h"
#define cc

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("Usage: ual in.ual (flags)\n");
        printf("Available flags:\n-c: saves cross-compiled code into ualo.c");
        return 1;
    } 
    if (argc == 2) {
#undef cc
        FILE *file = fopen(argv[1], "rb+");
        if (file == NULL) {
            printf("Error in opening file\n");
            return 1;
        }
    } 
    if (argc == 3) {
#define cc
        FILE *file = fopen(argv[2], "rb+");
        if (file == NULL) {
            printf("Error in opening file\n");
            return 1;
        }
    }
    uint8_t prog[0xFFFF];
    fread(prog, 1, 0xFFFF, file);
    fclose(file);
}
