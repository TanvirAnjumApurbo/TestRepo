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
    else
    {
        printf("% d is greater\n", b);
    }
    printf("End of program\n");
}
/*OUTPUT:
Take two inputs:13
34
 34 is greater
End of program*/