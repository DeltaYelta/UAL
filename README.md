# PSC
Programmable Specification written in C

# Glossary

# Notes

# Program layout
The first and second byte of any PSC program is used to store the beginning address of code written in the Language and RAM, respectively.
After this and until the first address is the Language specification where each instruction definition is as such:
(number of asm instructions) (instruction identifier) (asm instructions)


# Example program