#include <stdio.h>
int main()
{
    int i, loopcontrol = 20, mark = 0;
    for (i = 1; i >= loopcontrol; i++)
    {
        mark = 1;
    }
    if (mark == 0)
        printf("The loop continuation condition is initially false.");
    else
        printf("We have entered into the loop");
}
/*OUTPUT:
The loop continuation condition is initially false.*/