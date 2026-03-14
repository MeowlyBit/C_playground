#include <stdio.h>

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
    printf("%d %x %o", i, i, i); // %d - decimal, %x - hexadecimal, %o - octal

    return 0;
}