#include <stdio.h>
#include <string.h>
int main()
{
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    strcpy(newStr, oldStr);
    puts(newStr);
    puts(newStr);
    return 0;
}
/*
oldStr
oldStr
*/