#include <stdio.h>
int a = 10;
int main()
{
    local();
    printf("%d\n", a);
    return 0;
}

void local()
{
    int a = 5;
    a++;
    printf("%d\n", a);
}

/*
6
10
*/