#include <stdio.h>

int factorial(int n);
int n;

int main()
{
    printf("Enter positive integer(n):");
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1; // Base Case
    }
    else
    {
        return n * factorial(n - 1);
    }
}
