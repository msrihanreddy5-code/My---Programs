#include<stdio.h>

int main(){
    float C,F;
    int choice;

    printf("Enter 1: To convert Celsius to Farenheit\n");
    printf("Enter 2: To convert Farenheit to Celsius\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Enter the value of temperature in Celsius: ");
            scanf("%f",&C);
            F = (9*C)/5 + 32;
            printf("The value of temperature in Farenheit: %f",&F);
            break;
        
        case 2:
            printf("Enter the value of temperature in Farenheit: ");
            scanf("%f",&F);
            C = (F - 32) * (5/9);
            printf("The value of temperature in Celsius: ");
            break;
        
    }
    return 0;
}