#include <stdio.h>
void CalculatePrice(float value);

int main()
{
    float value = 100.00;
    CalculatePrice(value);
    printf("Value is %f", value);
    return 0;
}
void CalculatePrice(float value)
{
    printf("Final Price:%f\n", value + (.18 * value));
}

/*
Final Price:118.000000
Value is 100.000000
*/
