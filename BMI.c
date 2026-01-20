#include <stdio.h>

void calculate_bmi(float weight, float height) {
    if (height <= 0) {
        printf("Height must be greater than zero.\n");
        return;
    }

    float bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } 
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Category: Normal weight\n");
    } 
    else if (bmi >= 24.9 && bmi < 29.9) {
        printf("Category: Overweight\n");
    } 
    else {
        printf("Category: Obesity\n");
    }
}

int main() {
    float weight, height;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (meters): ");
    scanf("%f", &height);

    calculate_bmi(weight, height);

    return 0;
}
