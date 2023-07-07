#include <stdio.h>
int main()
{
    char a;
    printf("Take a character:");
    scanf("%c", &a);
    switch (a)
    {
    case 'A':
        printf("%d", a);
        break;
    default:
        printf("Hello");
    }
    return 4;
}