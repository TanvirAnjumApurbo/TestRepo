#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int is_prime = 1; // assume num is prime
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0; // num is not prime
            break;
        }
    }
    if (is_prime == 1)
    {
        printf("%d is prime.\n", num);
    }
    else
    {
        printf("%d is not prime.\n", num);
    }
    return 0;
}
