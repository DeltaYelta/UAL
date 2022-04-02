#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
	uint8_t id;
	uint8_t arg;
	uint8_t def[];
} Instruction;
#endif
