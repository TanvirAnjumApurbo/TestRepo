#include<stdio.h>
#include<conio.h>
#define PI 3.142

void main(void)
{
float radius,height,volume_sphere,volume_cylinder;
printf("take radius:");
scanf("%f",&radius);
printf("take height:");
scanf("%f",&height);

volume_sphere=PI*radius*radius*radius*4/3;
volume_cylinder=PI*radius*radius*height;

printf("volume of sphere=%f\n",volume_sphere);
printf("volume of cylinder=%f",volume_cylinder);

return 0;
}