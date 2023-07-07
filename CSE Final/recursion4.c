#include <stdio.h>

int fib(int N)
{
    if ((N == 1) || (N == 2))
        return 1;
    else
        return (fib(N - 1) + fib(N - 2));
}
int main()
{
    int num;
    scanf("%d", &num);

    num = fib(num);
    printf("%d\t", num);
    return 0;
}