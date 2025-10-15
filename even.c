/* Even or odd number*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main() {
    char input[100];
    int number;

    while (1) {
        printf("Enter a positive number (or type 'exit' to quit): ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "exit") == 0) {
            printf("Exiting program.\n");
            break;
        }

        int isValid = 1;
        for (int i = 0; input[i] != '\0'; i++) {
            if (input[i] < '0' || input[i] > '9') {
                isValid = 0;
                break;
            }
        }

        if (!isValid) {
            printf("Invalid input! Only positive numbers are allowed.\n");
            continue;
        }

        number = atoi(input);

        if (number % 2 == 0)
            printf("The number %d is even.\n", number);
        else
            printf("The number %d is odd.\n", number);
    }

    return 0;
}