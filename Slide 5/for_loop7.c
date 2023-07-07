#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            printf("i=%d j=%d sum=%d\n", i, j, i + j);
        }
    }
}
/*OUTPUT:
i=1 j=1 sum=2
i=1 j=2 sum=3
i=2 j=1 sum=3
i=2 j=2 sum=4
i=3 j=1 sum=4
i=3 j=2 sum=5*/