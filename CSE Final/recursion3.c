#include <stdio.h>

int sum(int n);
int num, add;
int main()
{
    printf("Enter a positive integer:\n");
    scanf("%d", &num);

    add = sum(num); // Call the sum function with the parameter
    printf("The sum of numbers from 1 to %d is: %d\n", num, add);
    return 0;
}
int sum(int n)
{
    if (n == 0)
    {
        return n; // Base case: return 0 when n is 0
    }
    else
    {
        return n + sum(n - 1); // Recursive case: add n with the sum of (n-1) numbers
    }
}
