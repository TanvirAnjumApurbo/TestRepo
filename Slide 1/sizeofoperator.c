#include <stdio.h>

int main() 
{
   int num1 = 5;
   double num2 = 3.14159;
   char str[] = "Hello, world!";

   printf("Size of int: %lu bytes\n", sizeof(int));
   printf("Size of double: %lu bytes\n", sizeof(double));
   printf("Size of char array: %lu bytes\n", sizeof(str));
   printf("Size of num1: %lu bytes\n", sizeof(num1));
   printf("Size of num2: %lu bytes\n", sizeof(num2));

   return 0;
}
/*OUTPUT:
Size of int: 4 bytes
Size of double: 8 bytes
Size of char array: 14 bytes
Size of num1: 4 bytes
Size of num2: 8 bytes*/