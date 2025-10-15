#include<stdio.h>

int main(){
    float a,b;
    printf("Enter the value of a and b: ");
    scanf("%f %f",&a,&b);

    float max = (a > b) ? a : b;
    printf("The maximum number is %.2f",max);

    return 0;
}