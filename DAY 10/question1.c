#include<stdio.h>
int main(){
    int percentage;
    printf("enter the percentage\n");
    scanf("%d",&percentage);
    if (percentage>=90)
    printf("A grade");
else if ( percentage >=80 && percentage <90 )
    printf("B grade");
else if( percentage >=70 && percentage <80 )
    printf("C grade");
else if ( percentage >=60 && percentage <70 )
    printf("D grade");
else if ( percentage >=40 && percentage <60 )
    printf("E grade");
else if ( percentage <40 )
    printf("F grade");
return 0;

}