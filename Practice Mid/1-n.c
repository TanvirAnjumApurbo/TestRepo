#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
