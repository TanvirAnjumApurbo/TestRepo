#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);

    int s = sum(a, b); //Argument/Actual Parameter
    printf("Sum is %d", s);
    return 0;
}

int sum(int x, int y) //Parameter/Formal parameter
{
    return x + y;
}
