#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "parse.h"
#include "instruction.h"
#include "arrlen.h"

int parse(Instruction def[], uint8_t ram[], uint8_t rgf[]) {
	int ins;
	int dfl = arrlen(def[]);
	int rml = arrlen(ram[]);
	int rfl = arrlen(rgf[]);
	for (int p = 0; p < rml;p++) {
		uint8_t cur = ram[p];
		bool mcn;
		if (cur < 0x08) {
			switch(cur)
				case ()
		}
		else {
			mcn = false;
		}
	}
}