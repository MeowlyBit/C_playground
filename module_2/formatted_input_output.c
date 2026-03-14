#include <stdio.h>

// Function with name and parameter char n 
void printBinary8(unsigned char n)
{
    // Binary representation
    for(int i = 7; i >= 0; i--)
        printf("%d", (n >> i) & 1);
}

int main(void) {

    int VarInt;
    char VarChar;
    float VarFloat;
	
    VarInt = 2012;
    VarChar = 'r';
    VarFloat = 3.1415;
	 
    printf("The year is %d. The radius is denoted as %c while PI is equal to %f\n", 
	        VarInt, VarChar, VarFloat);

    int i;
    i = 31;
    printf("%d %x %o\n", i, i, i); // %d - decimal, %x - hexadecimal, %o - octal

    //AND NOw - why???????????

    // unsigned char: 8-bit value without sign (range 0–255)
    unsigned char a = 31;
    printBinary8(a);
    printf("\n");

    //and again, why??
    printf("%p\n", &i); //and this why?

    /*
    Binary representation example

    bit:        0   0   0   1   1   1   1   1
    weight:   128  64  32  16   8   4   2   1
              2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0

    31 in binary:
    00011111

    = 16 + 8 + 4 + 2 + 1
    = 31
    */

    //Another one question, why THIS values for bits
    //Yes yes i know that its about binary and power 2 BUT WHY WTF

    /*
    Computer abstraction layers (from physics to software)

    electrons
    ↓
    transistors
    ↓
    logic gates
    ↓
    binary arithmetic circuits (adders)
    ↓
    CPU / ALU
    ↓
    machine code
    ↓
    C program
    */

    return 0;
}

