#include<stdio.h>
#include<math.h>
int main ()
{
double a,b,c,r1,r2;
printf( "enter 3 numbers\n");
scanf("%lf %lf %lf",&a,&b,&c);
double d= b*b-4*a*c;
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
if (d>0)
printf("real roots %.0lf %.0lf\n",r1,r2);
if (d==0)
printf("distinct roots %.0lf\n",r1);
if (d<0)
printf("complex roots %.0lf %.0lf\n",r1,r2);
return 0;
}
