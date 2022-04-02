#ifndef _PARSE_H
#define _PARSE_H
#include "instruction.h"

Instruction* defreader(uint8_t def[]);
int parse(Instruction def[], uint8_t ram[], uint8_t rgf[]);

#endif
