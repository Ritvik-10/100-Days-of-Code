#include<stdio.h>
int main (){
int t ;
printf("enter the time" );
scanf("%d",&t);
int h,m,s;
  h= t/3600;
 m=h%60;
 s=m%60;
 printf("%d:%d:%d ",h ,m, s);
return 0;}