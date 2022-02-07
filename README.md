# PSC
Programmable Specification written in C
# Notes
The machine has 3 registers A, B, and C which hold 1 byte of data each.  
They are all initialized to 0x00, but this may vary between implementations.  
The machine also has 2 flags, C and Z, for carry and zero, respectively.
# Machine instructions
The machine offers 8 instructions which should (hopefully) prove to be Turing-complete.
0x00 MVA x: Moves x into A.  
0x01 SWP x: Swaps A with B if x is 0 or A with C if x is greater than 0.  
0x02 ADD: Adds B and C before storing the result in A, if the result overflows, the carry flag is set and A is set to 0xFF.  
0x03 SUB: Subtracts B from C before storing the result in A, if the result is zero or underflows, the Z flag is set and A is set to 0x00.  
0x04 JMP x: Jumps unconditionally to address x.  
0x05 JPZ x: Jumps to address x if the Z flag is not set.  
0x06 JPC x: Jumps to address x if the C flag is set.  
0x07 EXC x: Executes instruction x (machine or assembly.)  

# Program layout
The first byte of any PSC program is used to store the beginning address of assembly code.  
After this and until the first address is the assembly specification where each instruction definition is as such:  
(number of mcn instructions including arguments) (instruction identifier) (mcn instructions)  

# Example instruction definition
(whitespace and prefixes added for readability.)   
0x00 0x1F 0x01 0x00 0x02  
This defines an instruction 1F which SWP's and then ADD's.  

# Example program
