#include <stdio.h>

/*
Char type
ASCII
Literals
Escape
Operations
*/

int main()
{
    //ex. 1
	printf("Diff beetween '%c' and '%c' is : %d\n", 'c', 'a', 'c' - 'a');
	printf("Diff beetween '%c' and '%c' is : %d\n", 'a', 'c', 'a' - 'c');

    //ex. 2
	char firstLetter = 'A';
	char firstSmallLetter = 'a';
	char lastLetter = 'Z';
	char lastSmallLetter = 'z';
	printf("Upper case letters between (and with) '%c' and '%c' is : %d\n", 
		lastLetter, firstLetter, lastLetter - firstLetter + 1);
	printf("Lower case letters between (and with) '%c' and '%c' is : %d\n", 
		lastSmallLetter, firstSmallLetter, lastSmallLetter - firstSmallLetter + 1);


    //ex.3
	char zero = '0';
    printf("'%c' - '%c' is: %d\n", '1', zero, '1' - zero);
    printf("'%c' - '%c' is: %d\n", '2', zero, '2' - zero);
    printf("'%c' - '%c' is: %d\n", '3', zero, '3' - zero);
    printf("'%c' - '%c' is: %d\n", '4', zero, '4' - zero);
    printf("'%c' - '%c' is: %d\n", '5', zero, '5' - zero);
    printf("'%c' - '%c' is: %d\n", '6', zero, '6' - zero);
    printf("'%c' - '%c' is: %d\n", '7', zero, '7' - zero);
    printf("'%c' - '%c' is: %d\n", '8', zero, '8' - zero);
    printf("'%c' - '%c' is: %d\n", '9', zero, '9' - zero);
    printf("'%c' - '%c' is: %d\n", '0', zero, '0' - zero);



    //My own code
    printf("ASCII code of '%c' is %d\n", 'A', 'A'); // 65

    char letter = 'A';

    for(int i = 0; i < 26; i++)
    {
        printf("%c ", letter + i);
    }

    char upper = 'A';
    char lower = upper + 32; //32 is a difference between lower and upper letter
    printf("\nLowercase: %c\n", lower);

    printf("Is 'A' < 'a'? %d\n", 'A' < 'a'); // 1 is true
    printf("A: %d, a: %d", 'A', 'a');

	return 0;
}