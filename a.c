#include <stdio.h>

int main() {
    int num, digit, digits[10], count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Store digits in array
    while (num > 0) {
        digits[count++] = num % 10;
        num = num / 10;
    }

    printf("Output: ");
    // Print from last to first to maintain order
    for (int i = count - 1; i >= 0; i--) {
        digit = digits[i];
        if (digit % 2 == 0) {
            printf("%d ", digit);
        } else {
            switch (digit) {
                case 1: printf("one "); break;
                case 3: printf("three "); break;
                case 5: printf("five "); break;
                case 7: printf("seven "); break;
                case 9: printf("nine "); break;
            }
        }
    }

    return 0;
}
