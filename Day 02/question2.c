#include<stdio.h>
int main(){
float radius,circumference,area;
const float pi =3.14 ;
printf("enter the value of radius\n");
scanf("%f",&radius);
area = pi * radius * radius;
circumference = 2 * pi * radius;
printf("area is = %f\n",area);
printf(" circumference = %f\n",circumference);
return 0;
}
