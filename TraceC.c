#include <stdio.h>

/* Enum to represent operations */
typedef enum {
    INC,
    ADD,
    MUL,
    SUB,
    PRINT,
    EXIT
} Operation;

/* Structure to track execution */
typedef struct {
    int value;
    int steps;
} Tracker;

/* Function to display menu */
void showMenu() {
    printf("\n--- C Execution Visualizer ---\n");
    printf("1. i++\n");
    printf("2. i += 2\n");
    printf("3. i *= 3\n");
    printf("4. i -= 1\n");
    printf("5. printf(\"%%d\", i)\n");
    printf("6. Exit\n");
    printf("Choose operation: ");
}

/* Function to execute selected operation */
int execute(Operation op, Tracker *t) {
    int ret = 0;

    switch(op) {
        case INC:
            ret = t->value++;
            break;

        case ADD:
            t->value += 2;
            ret = t->value;
            break;

        case MUL:
            t->value *= 3;
            ret = t->value;
            break;

        case SUB:
            t->value -= 1;
            ret = t->value;
            break;

        case PRINT:
            ret = printf("%d", t->value);
            break;

        default:
            break;
    }

    t->steps++;
    return ret;
}

int main() {
    Tracker t = {1, 0};
    int choice;
    int result;

    printf("Initial value of i = %d\n", t.value);

    while(1) {
        showMenu();
        scanf("%d", &choice);

        if(choice == 6)
            break;

        result = execute((Operation)(choice - 1), &t);

        printf("\nReturn value: %d", result);
        printf("\nCurrent i  : %d", t.value);
        printf("\nSteps done : %d\n", t.steps);
    }

    printf("\n--- Execution Finished ---\n");
    printf("Final value of i = %d\n", t.value);
    printf("Total steps = %d\n", t.steps);

    return 0;
}
