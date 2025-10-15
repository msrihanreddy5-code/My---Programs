#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define PI 3.1415

int main() {
    char op[20];
    double num1, num2, result;

    while (1) {
        printf("\nEnter operation (+, -, *, /, %%, ^, sqrt, log, exp, sin, cos, tan) ");
        printf("or type 'exit' to quit: ");
        scanf("%s", op);

        for (int i = 0; op[i]; i++) {
            op[i] = tolower(op[i]);
        }

        if (strcmp(op, "exit") == 0) {
            printf("Exiting the program...\n");
            break;
        }

        if (strcmp(op, "sqrt") == 0 || strcmp(op, "log") == 0 || 
            strcmp(op, "exp") == 0 || strcmp(op, "sin") == 0 || 
            strcmp(op, "cos") == 0 || strcmp(op, "tan") == 0) {

            printf("Enter a number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n');
                continue;
            }

            if (strcmp(op, "sqrt") == 0) {
                if (num1 >= 0)
                    result = sqrt(num1);
                else {
                    printf("Error! Cannot take square root of negative number.\n");
                    continue;
                }
            } 
            else if (strcmp(op, "log") == 0) {
                if (num1 > 0)
                    result = log(num1);
                else {
                    printf("Error! Logarithm undefined for non-positive numbers.\n");
                    continue;
                }
            } 
            else if (strcmp(op, "exp") == 0) {
                result = exp(num1);
            } 
            else if (strcmp(op, "sin") == 0) {
                result = sin(num1 * PI / 180.0); 
            } 
            else if (strcmp(op, "cos") == 0) {
                result = cos(num1 * PI / 180.0);
            } 
            else if (strcmp(op, "tan") == 0) {
                double radians = num1 * PI / 180.0;
                if (fmod(num1, 180.0) == 90.0) { 
                    printf("Error! tan(%.2lf) is undefined.\n", num1);
                    continue;
                }
                result = tan(radians);
            }

            printf("%s(%.2lf) = %.6lf\n", op, num1, result);
        }
        else {
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input! Please enter numbers.\n");
                while (getchar() != '\n');
                continue;
            }

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
            else if (strcmp(op, "%") == 0) {
                if ((long)num2 != 0) {
                    result = (long)num1 % (long)num2;
                    printf("%ld %% %ld = %ld\n", (long)num1, (long)num2, (long)result);
                } else {
                    printf("Error! Division by zero in modulus.\n");
                }
            } 
            else if (strcmp(op, "^") == 0) {
                result = pow(num1, num2);
                printf("%.2lf ^ %.2lf = %.6lf\n", num1, num2, result);
            } 
            else {
                printf("Invalid operator.\n");
            }
        }
    }
    return 0;
}

