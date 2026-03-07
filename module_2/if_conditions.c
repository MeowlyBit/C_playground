#include <stdio.h>

int main()
{
    //ex.1
	int a = 10;
	if (a != 9)
		puts("First condition is true");
	if (a - 1 == 9)
		puts("Second condition is true");
	if (a == 9 + 1)
		puts("Third condition is true");

    //ex.2
	int n = -3;
    if( n < 0 )
    {
        printf("The absolute value of %d is %d\n", n, -n);
    }
    
    printf("The value of n is %d\n", n);

    //ex.3

	int dayOfWeek = 1;
	if ( dayOfWeek == 1 )
        puts("The day of the week is Monday");

	if ( dayOfWeek == 2 )
        puts("The day of the week is Tuesday");

	if ( dayOfWeek == 3 )
        puts("The day of the week is Wednesday");


	return 0;
}