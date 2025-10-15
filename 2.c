  #include <stdio.h>

int main() {
    int intVal;
    float floatVal;

    printf("Enter an integer: ");
    scanf("%d", &intVal);

    float autoConverted = intVal;  
    printf("Automatically converted int to float: %.2f\n", autoConverted);

    printf("Enter a floating point number: ");

    scanf("%f", &floatVal);
    int castedValue = (int)floatVal;  
    printf("Explicitly casted float to int: %d\n", castedValue);

    return 0;
}