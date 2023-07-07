#include <stdio.h>
int main()
{
    int a = 1;
    if (a--)
        printf("Hello");
    else
        printf("Hi");
    return 0;
}
/*OUTPUT:
Hello*/