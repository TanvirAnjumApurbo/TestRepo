#include <stdio.h>

int main() 
{
    int num1, num2;

    printf("Enter two numbers to compare: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) printf("%d and %d are equal\n", num1, num2);
    if (num1 != num2) printf("%d and %d are not equal\n", num1, num2);
    if (num1 < num2) printf("%d is less than %d\n", num1, num2);
    if (num1 > num2) printf("%d is greater than %d\n", num1, num2);
    if (num1 <= num2) printf("%d is less than or equal to %d\n", num1, num2);
    if (num1 >= num2) printf("%d is greater than or equal to %d\n", num1, num2);

    return 0;
}
/*OUTPUT:
Enter two numbers to compare: 10
10
10 and 10 are equal
10 is less than or equal to 10
10 is greater than or equal to 10*/
