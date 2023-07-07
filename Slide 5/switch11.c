#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    case 2:
        printf("Hello");
        break;
    default:
        printf("Hi");
        break;
    }
    return 0;
}
/*Maybe there is wrong explanation in the slide.*/