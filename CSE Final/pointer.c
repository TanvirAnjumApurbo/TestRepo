#include <stdio.h>
int main()
{
    int i = 3;
    printf("Address of i=%u(decimal) %p(Hexadecimal)\n", &i, &i);
    printf("Value of i=%d\n", i);
    printf("Value of i=%d\n", *(&i));
    return 0;
}

/*
Address of i=6422044(decimal) 000000000061FE1C(Hexadecimal)
Value of i=3
Value of i=3
*/