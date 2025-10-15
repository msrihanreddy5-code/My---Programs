#include <stdio.h>

int main() {
    float a, b, c, n;

    printf("Enter the value of a, b and c: ");
    scanf("%.2f %.2f %.2f", &a, &b, &c);

    n = (a > b) ? ( (a > c) ? a : c ) : ( (b > c) ? b : c );

    printf("The maximum of %.2f, %.2f and %.2f is %.2f\n", a, b, c, n);

    return 0;
}
