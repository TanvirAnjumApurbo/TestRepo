#include <stdio.h>
main()
{
    int a, b;
    printf("Take two inputs:");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("% d is greater\n", a);
    }
    if (b > a)
    {
        printf("% d is greater\n", b);
    }
    printf("End of program\n");
}