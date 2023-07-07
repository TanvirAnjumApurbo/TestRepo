#include <stdio.h>
int main()
{
    int i1 = 12345, i2 = 678;
    printf("First int is %d, Second int is %d.\n", i1, i2);   // Normal
    printf("First int is %d, Second int is %5d.\n", i1, i2);  // Fieldwidth
    printf("First int is %d, Second int is %-5d.\n", i1, i2); // Alignment
    printf("First int is %d, Second int is %05d.\n", i1, i2); // Pad with zero
    return 0;
}
/*OUTPUT:
First int is 12345, Second int is 678.
First int is 12345, Second int is   678.
First int is 12345, Second int is 678  .
First int is 12345, Second int is 00678.*/