#include <stdio.h>
int factorial(int n);
int n;

int main()
{
    printf("Enter any number:");
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 1)
    {
        return 1; // Base Case
    }
    else
    {
        return factorial(n - 1) * n;
    }
}
