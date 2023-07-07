//Storage space taken by double type & its range values

#include <stdio.h>
#include <float.h>

int main() 
{
    printf("Storage size for double: %d\n", sizeof(double));
    printf("Minimum double positive value: %E\n", DBL_MIN);
    printf("Maximum double positive value: %E\n", DBL_MAX);
    printf("Precision value: %d\n", DBL_DIG);

    return 0;
}
/*Storage size for double: 8
Minimum double positive value: 2.225074E-308
Maximum double positive value: 1.797693E+308
Precision value: 15 */