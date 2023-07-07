#include <stdio.h>
int main()
{
    int y;
    printf("Enter year:");
    scanf("%d", &y);
    if (y % 400 == 0)
        printf("Its leap year");
    else if ((y % 100 != 0) && (y % 4 == 0))
        printf("Its leap year");
    else
        printf("Its not leap year");
    return 0;
}
