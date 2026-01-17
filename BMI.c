#include<stdio.h>
#include<math.h>
int main(){
    int h,w,BMI;
    printf("Enter your height in inches: ");
    scanf("%d",&h);
    printf("Enter your weight in pounds: ");
    scanf("%d",&w);
    BMI = (703 * w) / pow(h,2);
    if(BMI < 18.5){
        printf("Underweight\n");
    }
    else if(BMI >= 18.5 && BMI < 25){
        printf("Normal weight\n");
    }
    else if(BMI >= 25 && BMI < 30){
        printf("Overweight\n");
    }
    else{
        printf("Obesity\n");
    }
    return 0;
}
