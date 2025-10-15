#include<stdio.h>
#include<math.h>

int main(){
    float area,b,h;

printf("Enter the value of base and height: ");
scanf("%f %f",&b,&h);

area = 0.5*b*h;
printf("The area of triangle is %.2f",area);

return 0;
}