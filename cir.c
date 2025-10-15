#include<stdio.h>
#define pi 3.14
int main(){
    float radius,circumference,area;
    printf("Enter the value of radius: ");
    scanf("%f",&radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("The area of the circle with radius %.2f is %.2f\n",radius,area);
    printf("The circumference of the circle with radius %.2f is %.2f\n",radius,circumference);

    return 0;
}