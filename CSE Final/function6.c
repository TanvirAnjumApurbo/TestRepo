#include <stdio.h>

int square(int);

main()
{
    int x, y;
    for (x = 1; x <= 10; x++)
    {
        y = square(x);
        printf("The square of %d is %d\n", x, y);
    }
}
int square(int z)
{
    return z * z;
}

/*
The square of 1 is 1
The square of 2 is 4
The square of 3 is 9
The square of 4 is 16
The square of 5 is 25
The square of 6 is 36
The square of 7 is 49
The square of 8 is 64
The square of 9 is 81
The square of 10 is 100
*/