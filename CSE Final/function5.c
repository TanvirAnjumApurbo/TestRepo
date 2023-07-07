#include <stdio.h>

//Call by Value

int maximum(int, int, int); // function prototype

main()
{
    int x, y, z;
    printf("Enter three integers:");
    scanf("%d %d %d", &x, &y, &z);
    printf("The maximum is %d", maximum(x, y, z));
}

// function definition

int maximum(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}
