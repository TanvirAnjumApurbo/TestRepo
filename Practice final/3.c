#include <stdio.h>
struct book
{
    char name[10];
    float price;
    int pages;
};

int main()
{

    struct book b1 = {"Basic", 130.00, 550};
    struct book b2 = {"Physics", 130.00, 650};

    printf("%u %u %u\n", &b1.name, &b1.price, &b1.pages);
    printf("%s %f %d", b2.name, b2.price, b2.pages);
}