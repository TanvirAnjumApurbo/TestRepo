#include <stdio.h>
void main()
{
    int check = 2;
    switch (check)
    {
    case 1:
        printf("D.W. Steyn\n");
    case 2:
        printf("M.G. Johnson\n");
    case 3:
        printf("Mohammad Asif\n");
    default:
        printf("M.Muralidaram");
    }
}
/*OUTPUT:
M.G. Johnson
Mohammad Asif
M.Muralidaram*/