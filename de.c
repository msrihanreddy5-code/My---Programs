#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;

    while (temp != 0) {
        remainder = temp % 10;       
        decimal += remainder * pow(2, i); 
        temp /= 10;               
        i++;
    }

    printf("Binary %lld to Decimal is %d\n", binary, decimal);

    return 0;
}
