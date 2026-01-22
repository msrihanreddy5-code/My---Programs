#include <stdio.h>

int main() {
    int num, absValue;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        absValue = -num;
    } else {
        absValue = num;
    }

    printf("The absolute value of %d is %d\n", num, absValue);

    return 0;
}
