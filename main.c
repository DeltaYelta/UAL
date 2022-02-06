#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("Usage: psc in.psc (flags)\n");
        printf("Available flags:\n-c: saves cross-compiled code into psco.c");
        return 1;
    }
    FILE *file = fopen(argv[1], "rb+");
    if (file == NULL) {
        printf("Error in opening file\n");
        return 1;
    }
    fclose(file);
}