#include <stdio.h>

main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b1 = {'B', 130.00, 550};

    printf("Address of name=%u\n", &b1.name);
    printf("Address of price=%u\n", &b1.price);
    printf("Address of pages=%u\n", &b1.pages);
}

/*
Address of name=6422036
Address of price=6422040
Address of pages=6422044
*/