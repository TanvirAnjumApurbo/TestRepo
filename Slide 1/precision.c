#include <stdio.h>

double main()
{
   double value = 123.14159265;
   printf("Value=%lf\n", value);
   printf("Value=%6.2lf\n", value);
   printf("Value=%9.4lf\n", value);
   printf("Value=%2.2lf\n", value);
   return 0;
}
/*OUTPUT:
Value=123.141593
Value=123.14
Value= 123.1416
Value=123.14*/