#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            if (i == n || i == n - 1)
                printf("%d ", i);
            else
                printf("%d,", i);
        }
    }

    return 0;
}
