#include <stdio.h>

void main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("The largest number is: %d", a);
    } 
    else if (b >= a && b >= c) {
        printf("The largest number is: %d", b);
    } 
    else {
        printf("The largest number is: %d", c);
    }
}
