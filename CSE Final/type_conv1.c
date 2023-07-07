#include <stdio.h>
main()
{
    float f = 1234.5678;
    int i;
    i = f;
    printf("%f\n%d\n", f, i);

    float f1 = 10 / 3;
    printf("%f\n", f1);

    float f2 = 100.2;
    printf("%d", (int)f2); // typecast
}

/*
1234.567749
1234
3.000000
100
*/