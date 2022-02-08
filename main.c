#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

bool cc;

int arrlen(uint8_t arr[]) {
    size_t len = 0;
    while(arr[len]) {
        len++;
    }
    return len;
}

void loop(uint8_t prog[]) {
    for(int p = 0;p<0xFF;p++) {
        parse(prog[p]);
    }
}

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("Usage: psc in.psc (flags)\n");
        printf("Available flags:\n-c: saves cross-compiled code into psco.c");
        return 1;
    } 
    if (argc == 2) {
        bool cc = false;
        FILE *file = fopen(argv[1], "rb+");
        if (file == NULL) {
            printf("Error in opening file\n");
            return 1;
        }
    } 
    if (argc == 3) {
        bool cc = true;
        FILE *file = fopen(argv[2], "rb+");
        if (file == NULL) {
            printf("Error in opening file\n");
            return 1;
        }
    }
    uint8_t prog[0xFF];
    fread(prog, 1, 0xFF, file);
    fclose(file);
}
