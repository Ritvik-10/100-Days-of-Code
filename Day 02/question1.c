#include<stdio.h>
int main (){
int length, breadth;
printf("enter the value of length\n");
scanf("%d",&length);
printf("enter the value of breadth\n");
scanf("%d",&breadth);
printf("perimeter of rectangle:%d\n",2*(length+breadth));
printf("area of rectangle:%d",length*breadth);
return 0;
}