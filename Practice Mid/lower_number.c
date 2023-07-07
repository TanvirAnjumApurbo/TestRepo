#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if ((a < b) && (a < c))
        printf("%d is lower.", a);
    else if ((b < c) && (b < a))
        printf("%d is lower.", b);
    else
        printf("%d is lower.", c);
    return 0;
}
