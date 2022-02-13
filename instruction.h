#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

struct Instruction {
	uint8_t id;
	uint8_t arg;
	uint8_t def[];
};
#endif