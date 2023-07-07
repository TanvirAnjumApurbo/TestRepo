#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 10)
    {
        i++;
        if (i == 5)
            continue;
        printf("%d\n", i);
    }
    return 4;
}
/*OUTPUT:
1
2
3
4
6
7
8
9
10
11*/
