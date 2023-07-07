#include <stdio.h>
void main()
{
    switch (5 / 2 * 6 + 3.0)
    {
    case 3:
        printf("David Beckham\n");
        break;
    case 15:
        printf("Ronaldinho\n");
        break;
    case 0:
        printf("Lionel Messi\n");
        break;
    default:
        printf("Ronaldo");
    }
}
/*OUTPUT:
Compilation error, the value of switch should be integer.*/