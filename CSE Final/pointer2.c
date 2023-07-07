#include <stdio.h>
main()
{
    int i = 3, *j, **k;

    j = &i;
    k = &j;

    printf("Address of i=%u\n", &i);
    printf("Address of i=%u\n", j);
    printf("Address of i=%u\n", *k);
    printf("Address of j=%u\n", &j);
    printf("Address of j=%u\n", k);
    printf("Address of k=%u\n", &k);

    printf("Value of j=%u\n", j);
    printf("Value of k=%u\n", k);
    printf("Value of i=%d\n", i);
    printf("Value of i=%d\n", *(&i));
    printf("Value of i=%d\n", *j);
    printf("Value of i=%d\n", **k);
}

/*
Address of i=6422044
Address of i=6422044
Address of i=6422044
Address of j=6422032
Address of j=6422032
Address of k=6422024
Value of j=6422044
Value of k=6422032
Value of i=3
Value of i=3
Value of i=3
Value of i=3
*/