// Function with argument and return value
#include <stdio.h>
float add(float a, float b)
{
    return a + b;
}

int main()
{
    float a = 2.3, b = 4.6;
    float c;
    c = add(a, b);
    printf("%f", c);
    return 0;
}