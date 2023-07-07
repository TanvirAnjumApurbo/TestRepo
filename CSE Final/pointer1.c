#include <stdio.h>
main()
{
    int i = 3;
    int *j;

    j = &i;
    printf("Address of i=%u\n", &i);
    printf("Address of i=%u\n", &j);
    printf("Address of j=%u\n", &j);
    printf("Value of j=%u\n", j);
    printf("Value of i=%d\n", i);
    printf("Value of i=%d\n", *(&i));
    printf("Value of i=%d\n", *j);
}

/*
Address of i=6422044
Address of i=6422032
Address of j=6422032
Value of j=6422044
Value of i=3
Value of i=3
Value of i=3
*/