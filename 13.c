#include <stdio.h>
#define PI 3.14

void main() {
    float area, radius;
    
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    
    area = PI * radius * radius;
    printf("The value of area is %.2f", area);
}