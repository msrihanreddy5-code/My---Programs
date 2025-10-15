#include <stdio.h>

void main() {
    int a, b, sum, product, remainder;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    product = a * b;
    remainder = a % b;
    
    printf("The sum of %d and %d is %d\n", a, b, sum);
    printf("The product of %d and %d is %d\n", a, b, product);
    printf("The remainder of %d divided by %d is %d\n", a, b, remainder);
    
}