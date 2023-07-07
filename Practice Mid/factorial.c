// #include <stdio.h>

// int main()
// {
//     int n, i;
//     unsigned long long int factorial = 1;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     // Calculate the factorial of n
//     for (i = 1; i <= n; ++i)
//     {
//         factorial = factorial * i;
//     }

//     printf("Factorial of %d = %llu\n", n, factorial);

//     return 0;
// }

#include <stdio.h>
#include <gmp.h>

int main()
{
    int n, i;
    mpz_t factorial;

    // Initialize the factorial variable
    mpz_init(factorial);

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the factorial of n
    mpz_set_ui(factorial, 1);
    for (i = 1; i <= n; ++i)
    {
        mpz_mul_ui(factorial, factorial, i);
    }

    // Print the factorial as a decimal string
    gmp_printf("Factorial of %d = %Zd\n", n, factorial);

    // Clear the factorial variable
    mpz_clear(factorial);

    return 0;
}
