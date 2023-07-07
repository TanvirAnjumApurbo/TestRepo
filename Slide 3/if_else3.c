#include <stdio.h>
void main()
{
    int x = 1;
    if (x--)
        printf("The Godfather");
    --x;
    else printf("%d", x);
}
/*OUTPUT:
Output will be error because else is not connected with if*/