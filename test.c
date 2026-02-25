/*
Module 1: C basics - literals, variables, printf

What I practiced:
- decimal / octal / hexadecimal literals
- variables and arithmetic
- simple real-life examples (IP, time, days)

Notes:
- octal starts with 0
- hex starts with 0x
*/

#include <stdio.h>
int main(void)
{

	int number = 1;
	int incrementationExample = number += 1; //+= increments number and returns the new value

	puts("meow"); //Printing something, requires including <stdio.h> like other methods in this file 

	printf("The value of five is: %d \n", 5); //It can print some value of decimal number (int) - using %d
	printf("The value of six is: %d \n", 16 - 10);
	printf("The value of seven is: %d \n", 7);
	printf("The value of eight is: %d \n", (8000 - 7992));

	//Octal (base 8) numbers.	
	printf("The value of nine is: %d \n", 011); // 1 x 8 + 1 = 9
	printf("The value of ten is: %d \n", 012); // 1 x 8 + 2 = 10

	//Hexadecimal (base 16) numbers
	//A=10 B=11 C=12 D=13 E=14 F=15
	printf("The value of twenty-one is: %d \n", 0x15); // 1 x 16 + 5 = 21
	printf("The value of twenty-two is: %d \n", 0x16); // 1 x 16 + 6 = 22
	printf("The value of sixty-two is: %d \n", 0x3E); // 3 x 16 + 14 = 62
	printf("The value of seventy-four is: %d \n", 0x4A); // 4 x 16 + 10 = 74
	//But... why? I just want to know deeper why and how does it works, maybe later

	int simpleVariable = 10;
	printf("The value of ten is: %d \n", simpleVariable);

	int seconds = 60;
	int minutes = 60;
	printf("One hour is %d seconds\n", seconds * minutes);

	int ipPart1 = 127;
	int ipPart2 = 0;
	int ipPart3 = 0;
	int ipPart4 = 1;
	printf("Localhost IP is %d.%d.%d.%d\n", ipPart1, ipPart2, ipPart3, ipPart4);

	int daysInJanuary = 31;
	int daysInCurrentFebruary = 28;
	int daysInFebruary = daysInCurrentFebruary;
	int daysInMarch = 31;
	int daysInApril = 30;
	int daysInMay = 31;
	int daysInJune = 30;
	int daysInJuly = 31;
	int daysInAugust = 31;
	int daysInSeptember = 30;
	int daysInOctober = 31;
	int daysInNovember = 30;
	int daysInDecember = 31;
	int daysInFirstHalf = daysInJanuary + daysInFebruary + daysInMarch 
		+ daysInApril + daysInMay + daysInJune;
	int daysInSecondHalf = daysInJuly + daysInAugust + daysInSeptember 
		+ daysInOctober + daysInNovember + daysInDecember;
	printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
	printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
	printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);

	int Q1 = 90;
	int Q2 = 91;
	int Q3 = 92;
	int Q4 = 92;
	printf("Days of all quarters of the current year: 1: %d, 2: %d, 3: %d, 4: %d.\n", Q1, Q2, Q3, Q4);

	return 0; 
}

/*
	Module 1 summary:

    languages: natural and artificial,
    machine languages,
    high-level programming languages,
    obtaining the machine code: compilation process,
    writing simple programs,
    variables,
    integer values in real life and in C,
    integer literals,
    comments.
*/