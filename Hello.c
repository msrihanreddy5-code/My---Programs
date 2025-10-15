#include<stdio.h>

void main(){
    float a,b;

    printf("Enter the value of a and b: ");
    scanf("%f %f",&a,&b);

    a+b;
    a-b;
    a*b;
    a/b;

    printf("The sum of %.2f and %.2f is %.2f\n",a,b,a+b);
    printf("The difference between %.2f and %.2f is %.2f\n",a,b,a-b);
    printf("The product of %.2f and %.2f is %.2f\n",a,b,a*b);
    printf("The ratio of %.2f and %.2f is %.2f\n",a,b,a/b);
}