#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    if (num1>num2) printf("Greter number is %d", num1);
    else printf("Greater number is %d", num2);

    return 0;
}