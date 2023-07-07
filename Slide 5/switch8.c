#include <stdio.h>
int main()
{
    unsigned char a = 2;
    switch (a)
    {
    case 1:
        printf("Hello\n");
    case 24:
        printf("Hi\n");
    default:
        printf("Bi\n");
        printf("End\n");
    }
    return 0;
}
/*OUTPUT:
Bi
End*/