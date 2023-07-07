#include <stdio.h>

int sum(int n);
int n;

int main()
{
    printf("Enter positive integer(n):");
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}
int sum(int n)
{
    if (n == 0)
    {
        return 0; // Base case: return 0 when n is 0
    }
    else
    {
        return n + sum(n - 1); // Recursive case: add n with the sum of (n-1) numbers
    }
}
