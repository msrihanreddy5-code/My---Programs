#include<stdio.h>

int main(){
    float a,b,sum,difference,product,quotient;
    printf("Enter the values of a and b: ");
    scanf("%f %f",&a,&b);

    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = a/b;

    printf("The sum of %.2f and %.2f is %.2f\n",a,b,sum);
    printf("The difference between %.2f and %.2f is %.2f\n",a,b,difference);
    printf("The product of %.2f and %.2f is %.2f\n",a,b,product);
    printf("The quotient when %.2f is divided by %.2f is %.2f\n",a,b,quotient);

    return 0;
}