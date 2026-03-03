#include <stdio.h>

int main()
{

    // *** Floating point

    //--- ex. 1
	printf("The value of seven is: %f\n", 7.0);
	printf("The value of eight and a half is: %f\n", 8.5);

    //--- ex.2
	float tenValue = 10.000000;
	printf("The value of ten is: %f\n", tenValue);
	printf("The value of nine is: %f\n", 9.0);

    //--- ex.3
	float halfValue1 = 0.5;
	float piValue1 = 3.141593;
	printf("The value of half is: %f\n", halfValue1);
	printf("The value of Pi is: %f\n", piValue1);


    // *** Operators

    // --- ex.1 
	float halfValue2 = 0.6 - 0.1;
	float piValue2 = 0.14159265 + 3;
	printf("The value of half is: %f\n", halfValue2);
	printf("The value of Pi is: %f\n", piValue2);

    // --- ex.2
	int fourValue = 2 + 2;
	int fiveValue = 2 + 3;
	printf("The value of four is: %d\n", fourValue);
	printf("The value of five is: %d\n", fiveValue);

    // --- ex.3
	float tenValue2 = 2 * 3 + 4;
	float twelveValue = 2 * 2.5 + 2 * 3.5;
	printf("The value of ten is: %f\n", tenValue2);
	printf("The value of twelve is: %f\n", twelveValue);

    // --- ex.4
	int tenValue3 = 3 * 8 - 14;
	int twentyValue = 2 * tenValue - 10 % 5;
	printf("The value of ten is: %d\n", tenValue3);
	printf("The value of twenty is: %d\n", twentyValue);

    // --- ex.5
	int xValue1 = 4 * 6 % 5;
	int eightValue = 2 * xValue1 + 10 % 5;
	printf("The value of eight is: %d\n", eightValue);

    // --- ex.6
	int xValue=5;
	int yValue=9;
	int result;
	int bigResult;

	/* 
		increment xValue by 3
		decrement yValue by xValue
		multiply xValue times yValue giving result
		increment result by result
		decrement result by 1
		assign result modulo result to yValue
		increment result by result added to xValue
		assign result times result times result to bigResult
		increment result by xValue times yValue 
    */

    xValue += 3;
    yValue -= xValue;
    result = xValue * yValue;
    result += result;
    result--;
    yValue = result%result;
    result += result + xValue;
    bigResult = result * result * result;
    result += xValue * yValue;

	printf("result: %d\n", result);
	printf("big result: %d\n", bigResult);

	return 0;
}