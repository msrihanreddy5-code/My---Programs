#include <stdio.h>
#define SIZE 5

int main() {
    int stack[SIZE], top = -1;
    int choice, value;

    while(1) {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(top == SIZE - 1) {
                    printf("Stack Overflow\n");
                } else {
                    scanf("%d", &value);
                    stack[++top] = value;
                }
                break;

            case 2:
                if(top == -1) {
                    printf("Stack Underflow\n");
                } else {
                    printf("Popped: %d\n", stack[top--]);
                }
                break;

            case 3:
                for(int i = top; i >= 0; i--)
                    printf("%d ", stack[i]);
                printf("\n");
                break;

            case 4:
                return 0;
        }
    }
}
