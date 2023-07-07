#include <stdio.h>

void main()
{

    int a = 8;
    int b = 3;
    int mod;
    float result;

    mod = a % b;
    result = (float)a / b;

    printf("mod = % d\n", mod);
    printf("result = % f", result);
}

/*
mod =  2
result =  2.000000
*/