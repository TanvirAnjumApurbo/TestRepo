#include <stdio.h>
int main()
{
    switch (1)
    {
        printf("Out\n");
        int a = 5;
    default:
        printf("Hi\n");
        break;
    case 2:
        printf("Hello\n");
        break;
    }
    return 0;
}
/*OUTPUT:
Ordering of case does not matter.
Hi*/