#include <stdio.h>
main()
{
    int sum = 0, n = 1;
    while (n <= 10)
    {
        sum = sum + n;
        n = n + 1;
    }
    printf("sum = % d\n", sum);
}
/*OUTPUT:
sum =  55*/