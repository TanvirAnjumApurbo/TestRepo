#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
            continue;
        printf("%d\n", i);
        i++;
    }
    return 4;
}
/*OUTPUT:
1
2
3
4*/