#include <stdio.h>
void printHW(int count);
int main()
{
    printHW(100);
    return 0;
}
void printHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World\t");
    printHW(count - 1);
}
