#include<stdio.h>
#define PI 3.14159

void main(){
    float radius,area
    printf("Enter the value of radius: ");
    scanf("%F",&radius);
    area = (pow(radius,2) * PI);
    printf("Area is %f ",&area);
}