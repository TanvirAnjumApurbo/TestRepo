#include <stdio.h>

int main()
{
    int marks[5], i = 0, sum = 0;

    for (i = 0; i <= 4; i++)
    {
        printf("Enter marks:");
        scanf("%d", &marks[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        sum = sum + marks[i];
    }
    printf("%d\n", sum);
    printf("%f\n", (float)sum / 5);
   
    for (i = 0; i <= 4; i++)
        printf("%d\t", marks[i]);

    return 0;
}