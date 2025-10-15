#include <stdio.h>

int main()
{
    int number;

    while (1)
    {
        printf("Enter a number (type -1 to exit): ");
        scanf("%d", &number);

        if (number == -1)
            break;

        if (number % 2 == 0)
            printf("The number %d is even.\n", number);
        else
            printf("The number %d is odd.\n", number);
    }

    printf("Program exited.\n");
    return 0;
}