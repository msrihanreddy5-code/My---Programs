#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char op[10];
    double num1, num2, result;

    while (1) {
        printf("Enter operator (+, -, *, /) or type 'exit' to quit: ");
        scanf("%s", op);

        if (strcmp(op, "exit") == 0) {
            printf("Exiting the program...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        if (strcmp(op, "+") == 0) {
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        } 
        else if (strcmp(op, "-") == 0) {
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        } 
        else if (strcmp(op, "*") == 0) {
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        } 
        else if (strcmp(op, "/") == 0) {
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
        } 
        else {
            printf("Invalid operator.\n");
        }
    }
    return 0;
}
