#include <stdio.h>
#define SIZE 5

int stack[SIZE], top = -1;
int queue[SIZE], front = 0, rear = -1;

void push(int x) {
    if(top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = x;
}

void pop() {
    if(top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

void enqueue(int x) {
    if(rear == SIZE - 1)
        printf("Queue Overflow\n");
    else
        queue[++rear] = x;
}

void dequeue() {
    if(front > rear)
        printf("Queue Underflow\n");
    else
        printf("Dequeued: %d\n", queue[front++]);
}

void displayStack() {
    printf("Stack: ");
    for(int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

void displayQueue() {
    printf("Queue: ");
    for(int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    int choice, x;

    while(1) {
        printf("\n1.Push 2.Pop 3.Stack Display\n");
        printf("4.Enqueue 5.Dequeue 6.Queue Display\n");
        printf("7.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: scanf("%d", &x); push(x); break;
            case 2: pop(); break;
            case 3: displayStack(); break;
            case 4: scanf("%d", &x); enqueue(x); break;
            case 5: dequeue(); break;
            case 6: displayQueue(); break;
            case 7: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
