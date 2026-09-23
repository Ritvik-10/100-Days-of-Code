#include <stdio.h>
#include<math.h>
int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;
    int i;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    amount = principal * pow((1+(rate/100.0)),time);

    compoundInterest = amount - principal;

    printf("Simple Interest = %f\n", simpleInterest);
    printf("Compound Interest = %f\n", compoundInterest);

    return 0;
}