/*Area of rectangle */
#include <stdio.h>

void main(){
    float l,b,area,perimeter;
    printf("Enter the value of l and b");
    scanf("%f %f",&l,&b);
    area = l*b;
    perimeter = 2 * (l+b);
    printf("Area and Perimeter is %.2f and %.2f respectively",area,perimeter);
}