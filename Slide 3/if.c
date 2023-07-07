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
    printf("End of program");
    return 0;
}
/*OUTPUT:
Take two inputs:6
5
 6 is greater
End of program*/