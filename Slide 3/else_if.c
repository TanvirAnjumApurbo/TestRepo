#include <stdio.h>
#include <conio.h>
void main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (grade > 90)
        printf("Grade: A");
    else if (grade > 80)
        printf("Grade: B");
    else if (grade > 70)
        printf("Grade: C");
    else if (grade > 60)
        printf("Grade: D");
    else if (grade > 50)
        printf("Grade: E");
    else
        printf("Grade: F");
    return 0;
}