#include <stdio.h>
int main()
{
    int x, y, temp = 0;
    printf("Enter 2 numbers:");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("%d %d", x, y);
    return 0;
}