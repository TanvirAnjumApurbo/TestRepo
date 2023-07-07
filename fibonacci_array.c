#include <stdio.h>
int main()
{
    int n, fib[10];
    printf("Enter n (n>2):");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", fib[i]);
    }
    return 0;
}