#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    return (float)a / b;
}

int main()
{
    int num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("Result: %d\n", add(num1, num2));
        break;
    case '-':
        printf("Result: %d\n", subtract(num1, num2));
        break;
    case '*':
        printf("Result: %d\n", multiply(num1, num2));
        break;
    case '/':
        printf("Result: %.2f\n", divide(num1, num2));
        break;
    default:
        printf("Error: Invalid operator\n");
        break;
    }

    return 0;
}
