#include <stdio.h>

int main()
{

    // *** Priorities and parentheses

    // --- ex.1
	int xValue = 5;
	int yValue = 9;
	int result = (xValue + yValue) * 2;
	int bigResult = xValue + (yValue * 6);
	printf("the result is: %d\n", result);
	printf("the big result is: %d\n", bigResult);

    // --- ex.2
	int xValue1 = 3;
	int yValue1 = 2;
	int result1 = (xValue1 + yValue1) * 2 * yValue1;
	int smallResult = -((xValue1 - yValue1) - (4 + yValue1));
	printf("the result is: %d\n", result1);
	printf("the small result is: %d\n", smallResult);

    // --- ex.3
    // int xValue = 5;
	// int yValue = 3;
	// int result = (xValue % yValue) * (14 % yValue);
	// int smallResult = xValue + 10 % 4 % xValue;
	// printf("the result is: %d\n", result); - its 4
	// printf("the small result is: %d\n", smallResult); - its 7

    return 0;
}