#include <stdio.h>
int main()
{
    unsigned char a = 2;
    switch (a)
    {
    default:
        printf("Bi\n");
    case 1:
        printf("Hello\n");
    case 24:
        printf("Hi\n");
        printf("End\n");
    }
    return 0;
}
/*OUTPUT:
Bi
Hello
Hi
End*/