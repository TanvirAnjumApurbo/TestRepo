#include <stdio.h>

void italy();
void brazil();
void argentina();

void main()
{
    printf("I am in main function.\n");
    italy();
    brazil();
    argentina();
    printf("I came back in main function.");
}

void italy()
{
    printf("Italy:1934 1938 1982 2006\n");
}
void brazil()
{
    printf("Brazil:1958 1962 1970 1994 2002\n");
}
void argentina()
{
    printf("Argentina:1978 1986 2022\n");
}