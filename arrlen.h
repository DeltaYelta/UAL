#ifndef ARRLEN_H
#define ARRLEN_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


int arrlen(void *arr[]) {
    int len = 0;
    while (arr[len]) {
        len++;
    }
    return len;
}
#endif
