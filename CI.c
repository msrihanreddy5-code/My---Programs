#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;


    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time period in years: ");
    scanf("%lf", &time);


    simpleInterest = (principal * rate * time) / 100;


    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
