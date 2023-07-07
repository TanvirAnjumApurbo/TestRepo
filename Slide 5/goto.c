#include <stdio.h>
int main()
{
    int i = 1;
A:
    if (i <= 10)
    {
        printf("%d\n", i);
        i++;
        goto A;
    }
    return 4;
}
/*OUTPUT:
1
2
3
4
5
6
7
8
9
10*/