#include <stdio.h>
#include <limits.h>

int main() 
{
   printf("Maximum bits in a byte %d\n", CHAR_BIT);
   printf("Minimum value for signed char %d\n", SCHAR_MIN);
   printf("Maximum value for signed char %d\n", SCHAR_MAX);
   printf("Maximum value for unsigned char %d\n", UCHAR_MAX);
   printf("Minimum value for char %d\n", CHAR_MIN);
   printf("Maximum value for char %d\n", CHAR_MAX);
   printf("Maximum bytes in multi-byte array %d\n", MB_LEN_MAX);
   printf("Minimum value of short int %d\n", SHRT_MIN);
   printf("Maximum value of short int %d\n", SHRT_MAX);
   printf("Maximum value of unsigned short int %d\n", USHRT_MAX);
   printf("Minimum value of int %d\n", INT_MIN);
   printf("Maximum value of int %d\n", INT_MAX);
   printf("Maximum value of unsigned int %ld\n", UINT_MAX);
   printf("Minimum value of long int %ld\n", LONG_MIN);
   printf("Maximum value of long int %ld\n", LONG_MAX);

   return(0);
}
/*OUTPUT:
Maximum bits in a byte 8
Minimum value for signed char -128
Maximum value for signed char 127
Maximum value for unsigned char 255
Minimum value for char -128
Maximum value for char 127
Maximum bytes in multi-byte array 5
Minimum value of short int -32768
Maximum value of short int 32767
Maximum value of unsigned short int 65535
Minimum value of int -2147483648
Maximum value of int 2147483647
Maximum value of unsigned int -1
Minimum value of long int -2147483648
Maximum value of long int 2147483647*/