#include <stdio.h>

int main() {
    int n, i, j, flag, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            sum += i;
    }

    printf("The sum of prime numbers up to %d is %d", n, sum);

    return 0;
}
