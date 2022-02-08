# UAL
User-defined Assembly Language  
This program implements a CPU of the UAL architechure, which allows users to create their own assembly language
from a small set of 8 machine instructions.  
# Notes
The machine has 3 registers A, B, and C which hold 1 byte of data each.  
They are all initialized to 0x00, but this may vary between implementations.  
The machine also has 2 flags, C and Z, for carry and zero, respectively.
The instruction 0x07 0x07 is equivalent to a NOP in other architectures.
# Machine instructions
The machine offers 8 instructions which should (hopefully) prove to be Turing-complete.  
0x00 MVA x: Moves address x into A.  
0x01 SWP x: Swaps A with B if x is 0 or A with C if x is greater than 0.  
0x02 ADD x: Adds B and C and stores the result in A (x has no effect.)  
0x03 SUB x: Subtracts B from C and stores the result in A, if the result is zero or underflows, the Z flag is set and A is set to 0x00 (x has no effect.)  
0x04 JMP x: Jumps unconditionally to relative address x.  
0x05 JPZ x: Jumps to relative address x if the Z flag is not set.  
0x06 MAR x: Moves A into address x.  
0x07 EXC x: Executes instruction x (machine or assembly.)  

# Program layout
The first byte of any UAL program is used to store the beginning address of UAL assembly.  
After this and until the first address is the assembly specification where each instruction definition is as such:  
(number of mcn instructions including arguments) (instruction identifier) (mcn instructions)  

# Example instruction definition
(whitespace and prefixes added for readability.)   
0x02 0xFF 0x07 0x07  
This defines an instruction 0xFF to run 0x07 0x07, effectively a NOP.  
# Example program
