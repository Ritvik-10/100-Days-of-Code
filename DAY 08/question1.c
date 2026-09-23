#include<stdio.h>
int main (){
char c;
printf(" enter the charchter\n");
scanf("%c",&c);
if(c>='a'&&c<='z')
printf("Small Case Aplhabet");
else if(c>='A'&&c<='Z')
printf("Upper Case Aplhabet");
else if(c>='0'&&c<='9')
printf("Number");
else 
printf("Special Charchter");
}