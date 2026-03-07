#include <stdio.h>

int main()
{
    /*
    && - AND
    & - AND for bits

    1 & 1 = 1
    1 & 0 = 0
    0 & 1 = 0
    0 & 0 = 0

    */

    int status = 5;

    printf("status = %d\n", status);
    printf("5 in binary: 00000101\n");

    if (status & 1) {
        puts("bit0: 1");
    } else {
        puts("bit0: 0");
    }

    if (status & 2) {
        puts("bit1: 1");
    } else {
        puts("bit1: 0");
    }

    if (status & 4) {
        puts("bit2: 1");
    } else {
        puts("bit2: 0");
    }

    //Or i can use other version:

    if (status & (1 << 0)){} //Its for bit0
    if (status & (1 << 1)){} //Its for bit1
    if (status & (1 << 2)){} //Its for bit2
    // 1 << n shifts the bit to the left by n positions
    // which produces: 1, 2, 4, 8, 16... (powers of two)

    //Its time for MEOW
    //In ASCII:

    printf("ASCII code of '%c' is %d\n", 'M', 'M');
    printf("ASCII code of '%c' is %d\n", 'E', 'E');
    printf("ASCII code of '%c' is %d\n", 'O', 'O');
    printf("ASCII code of '%c' is %d\n", 'W', 'W');
 
    int M = 'M';
    int E = 'E';
    int O = 'O';
    int W = 'W';

    int bit0M = (M & (1 << 0)) ? 1 : 0;
    int bit1M = (M & (1 << 1)) ? 1 : 0;
    int bit2M = (M & (1 << 2)) ? 1 : 0;
    int bit3M = (M & (1 << 3)) ? 1 : 0;
    int bit4M = (M & (1 << 4)) ? 1 : 0;
    int bit5M = (M & (1 << 5)) ? 1 : 0;
    int bit6M = (M & (1 << 6)) ? 1 : 0;
    int bit7M = (M & (1 << 7)) ? 1 : 0;

    int bit0E = (E & (1 << 0)) ? 1 : 0;
    int bit1E = (E & (1 << 1)) ? 1 : 0;
    int bit2E = (E & (1 << 2)) ? 1 : 0;
    int bit3E = (E & (1 << 3)) ? 1 : 0;
    int bit4E = (E & (1 << 4)) ? 1 : 0;
    int bit5E = (E & (1 << 5)) ? 1 : 0;
    int bit6E = (E & (1 << 6)) ? 1 : 0;
    int bit7E = (E & (1 << 7)) ? 1 : 0;

    int bit0O = (O & (1 << 0)) ? 1 : 0;
    int bit1O = (O & (1 << 1)) ? 1 : 0;
    int bit2O = (O & (1 << 2)) ? 1 : 0;
    int bit3O = (O & (1 << 3)) ? 1 : 0;
    int bit4O = (O & (1 << 4)) ? 1 : 0;
    int bit5O = (O & (1 << 5)) ? 1 : 0;
    int bit6O = (O & (1 << 6)) ? 1 : 0;
    int bit7O = (O & (1 << 7)) ? 1 : 0;

    int bit0W = (W & (1 << 0)) ? 1 : 0;
    int bit1W = (W & (1 << 1)) ? 1 : 0;
    int bit2W = (W & (1 << 2)) ? 1 : 0;
    int bit3W = (W & (1 << 3)) ? 1 : 0;
    int bit4W = (W & (1 << 4)) ? 1 : 0;
    int bit5W = (W & (1 << 5)) ? 1 : 0;
    int bit6W = (W & (1 << 6)) ? 1 : 0;
    int bit7W = (W & (1 << 7)) ? 1 : 0;


    printf("M in binary: %d%d%d%d%d%d%d%d\n", bit7M, bit6M, bit5M, bit4M, bit3M, bit2M, bit1M, bit0M);
    printf("E in binary: %d%d%d%d%d%d%d%d\n", bit7E, bit6E, bit5E, bit4E, bit3E, bit2E, bit1E, bit0E);
    printf("O in binary: %d%d%d%d%d%d%d%d\n", bit7O, bit6O, bit5O, bit4O, bit3O, bit2O, bit1O, bit0O);
    printf("W in binary: %d%d%d%d%d%d%d%d\n", bit7W, bit6W, bit5W, bit4W, bit3W, bit2W, bit1W, bit0W);

    //I know, there is lots of code, but it works and MEOW!

    return 0;
}