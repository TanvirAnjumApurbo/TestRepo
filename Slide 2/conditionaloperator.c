#include <stdio.h>
int main()
{
    char February;
    int days;
    printf("If this year is leap year, enter 1. If not enter any integer: ");
    scanf("%d", &February);
    // If test condition (February == '1') is true, days equal to 29.
    // If test condition (February == '1') is false, days equal to 28.
    days = (February == 1) ? 29 : 28;
    printf("Number of days in February = %d", days);
    return 0;
}
/*OUTPUT:
If this year is leap year, enter 1. If not enter any integer: 12
Number of days in February = 28*/
