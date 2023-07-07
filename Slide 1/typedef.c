#include <stdio.h>
#include <conio.h>
int main()
{
    typedef float distance;
    distance miles, km;
    scanf("%f", &miles);
    km = 1.6 * miles;
    printf("%f", km);
    return 0;
}
/*typedef existing_type new_type;*/