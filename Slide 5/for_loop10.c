#include <stdio.h>
int main()
{
    static int i;
    for (++i; ++i; ++i)
    {
        printf("%d", i);
        if (i == 4)
            break;
    }
    return 0;
}
/*OUTPUT:
24*/
