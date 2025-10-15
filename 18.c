#include<stdio.h>
# define pi 3.1416

int main(){
    float radius,area;
    printf("Enter the value of radius: ");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("The area of circle having radius %.2f is %.2f",radius,area);

    return 0;
}