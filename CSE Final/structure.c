#include <stdio.h>
main()
{
    char name[3];
    float price[3];
    int pages[3], i;

    printf("Enter names, prices and no. of pages of 3 books\n");
    for (i = 0; i <= 2; i++)
        scanf(" %c %f %d", &name[i], &price[i], &pages[i]); //space before %c

    printf("And this is what you entered\n");
    for (i = 0; i <= 2; i++)
        printf("%c %f %d\n", name[i], price[i], pages[i]);
}

/*
And this is what you entered
e 23.000000 34
e 34.000000 56
r 45.000000 56
*/