// Function with no argument and no return value
#include <stdio.h>
int main()
{
    add();
    return 0;
}

void add()
{
    int a = 5, b = 2, c;
    c = a + b;
    printf("%d\n", c);
}