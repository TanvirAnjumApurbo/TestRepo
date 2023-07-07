#include <stdio.h>
main()
{
    struct personal
    {
        char name[20];
        int day;
        char month[10];
        int yr;
        float salary;
    };
    struct personal person;
    printf("Input values\n");
    scanf("%s %d %s %d %f", &person.name, &person.day, &person.month, &person.yr, &person.salary);

    printf("%s %d %s %d %f\n", person.name, person.day, person.month, person.yr, person.salary);
}

/*
tanvir 34 december 2002 234.429993
*/