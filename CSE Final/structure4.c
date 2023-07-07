#include <stdio.h>
main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[10];
    int i;

    for (i = 0; i <= 10; i++)
    {
        printf("Enter name, price and pages\n");
        scanf(" %s %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }

    for (i = 0; i <= 10; i++)
        printf(" %s %f %d\n", b[i].name, b[i].price, b[i].pages);
}