# PSC
Programmable Specification written in C
# Notes
The machine has 3 registers A, B, and C which hold 1 byte of data each.  
They are all initialized to 0x00, but this may vary between implementations.  

# Machine instructions
The machine offers 
0x00 MRA x: Moves x into A.  
0x01 SWP x: Swaps A with B if x is 0 or C if x is greater than 0.  
0x02 ADD: Adds B and C before storing the result in C.  
0x03 SUB: Subtracts B from C before storing the result in C.  

# Program layout
The first byte of any PSC program is used to store the beginning address of assembly code.  
After this and until the first address is the assembly specification where each instruction definition is as such:  
(number of mcn instructions including arguments) (instruction identifier) (mcn instructions)  
<h2>Example instruction definition</h2>  
(whitespace and prefixes added for readability)  
0x00 0x1F 0x01 0x00 0x02  
This defines an instruction 1F which SWP's and then ADD's.  

# Example program
