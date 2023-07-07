// Function with argument and no return value
#include <stdio.h>

void add(float a, float b);

int main()
{
    float a = 2.3, b = 4.6;
    add(a, b);
    return 0;
}

void add(float a, float b)
{
    float c;
    c = a + b;
    printf("%f", c);
}