#include <stdio.h>

int main()
{
    unsigned int a = 60; /* 60 = 00111100 */
    unsigned int b = 13; /* 13 = 00001101 */
    int c = 0;
    c = a & b; // 12 = 00001100
    printf("Line 1 - Value of c is %d\n", c);
    c = a | b; // 61 = 00111101
    printf("Line 2 - Value of c is %d\n", c);
    c = a ^ b; // 49 = 00110001
    printf("Line 3 - Value of c is %d\n", c);
    c = ~a; // -61 = 11000011
    printf("Line 4 - Value of c is %d\n", c);
    c = a << 2; // 240 = 11110000
    printf("Line 5 - Value of c is %d\n", c);
    c = a >> 2; // 15 = 00001111
    printf("Line 6 - Value of c is %d\n", c);
    c = ~(a | b); // NOR
    printf("Line 7 - Value of c is %d\n", c);
    c = ~(a & b); // NAND
    printf("Line 8 - Value of c is %d\n", c);
    c = ~(a ^ b); // X-NOR
    printf("Line 9 - Value of c is %d\n", c);
    return 0;
}
/*
Line 1 - Value of c is 12
Line 2 - Value of c is 61
Line 3 - Value of c is 49
Line 4 - Value of c is -61
Line 5 - Value of c is 240
Line 6 - Value of c is 15
Line 7 - Value of c is -62
Line 8 - Value of c is -13
Line 9 - Value of c is -50
*/
