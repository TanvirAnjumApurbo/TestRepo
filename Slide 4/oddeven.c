#include <stdio.h>
int main()
{
    int num = 0;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Number is even");

    else
        printf("Number is odd");

    return 0;
}