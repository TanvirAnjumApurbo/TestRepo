#include <stdio.h>
int main()
{
    char fullName[100];
    // printf("Enter you full name:");
    // scanf("%s", fullName); //no need '&' cause string is a array and array is a pointer.
    // printf("fullName is %s", fullName);

    gets(fullName);
    fgets(fullName, 100, stdin); //standard input
    puts(fullName);
    return 0;
}