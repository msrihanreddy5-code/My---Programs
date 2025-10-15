#include <stdio.h>
#define pi 3.14

void main(){
    float radius,area;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("area = %d", area);
}