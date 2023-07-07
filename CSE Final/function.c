#include <stdio.h>

void message();

void main()
{
    message();
    printf("This is inside main function.");
}

void message()
{
    printf("This is inside message function.\n");
}