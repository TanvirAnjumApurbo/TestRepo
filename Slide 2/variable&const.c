#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Take value of a:");
    scanf("%d", &a);
    printf("Value of a:%d\n", a);

    printf("%d\n", 12);

    printf("Take value of a:");
    scanf("%d", &a);
    printf("Value of a:%d\n", a);

    return 0;
}
/*OUTPUT:
Take value of a:45
Value of a:45
12
Take value of a:46
Value of a:46 */