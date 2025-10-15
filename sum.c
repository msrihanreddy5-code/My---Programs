#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];
    int a, b;

    while (1) {
        printf("Enter two numbers separated by a comma (or type 'exit' to quit): ");
        fgets(input, sizeof(input), stdin);

        
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "exit") == 0) {
            break;
        }

        if (sscanf(input, "%d,%d", &a, &b) == 2) {
            printf("Sum: %d\n", a + b);
        } else {
            printf("Invalid input. Please enter two numbers separated by a comma, or 'exit'.\n");
        }
    }

    printf("Goodbye!\n");
    return 0;
}