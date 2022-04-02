#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "parse.h"
#include "instruction.h"
#include "arrlen.h"

Instruction* defreader(uint8_t def[]) {
	Instruction ret[0xFFFF];
	Instruction ibf;
	for (int p = 0; p < arrlen(def); p++) {
		int len;
		if (len = 0) {
			
			len = def[p];

		}
		else if (len > 0) {

		}
		else /*what are you doing please stop*/ {}
	}
	return ret;
}

int parse(Instruction def[], uint8_t ram[], uint8_t rgf[]) {
	int ins;
	int dfl = arrlen(def);
	int rml = arrlen(ram);
	int rfl = arrlen(rgf);
	for (int p = 0; p < rml;p++) {
		uint8_t cur = ram[p];
		bool mcn = true;
		if (cur < 0x08) {
			switch(cur)
				default:
					break;
		}
		else {
			mcn = false;
		}
	}
}
