// Function with argument and return value
#include <stdio.h>
float add(float a, float b)
{
    float c;
    c = a + b;
    return c;
}

int main()
{
    float a = 2.3, b = 4.6;
    int c;
    c = add(a, b);
    printf("%d", c);
    return 0;
}