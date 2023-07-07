//Storage space taken by a float type and its ramge values

#include <stdio.h>
#include <float.h>

int main() 
{
    printf("Storage size for float: %d\n", sizeof(float));
    printf("Minimum float positive value: %E\n", FLT_MIN);
    printf("Maximum float positive value: %E\n", FLT_MAX);
    printf("Precision value: %d\n", FLT_DIG);
    
    return 0;
}

/* OUTPUT:
Storage size for float: 4
Minimum float positive value: 1.175494E-038
Maximum float positive value: 3.402823E+038
Precision value: 6 */