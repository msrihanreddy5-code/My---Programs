#include<stdio.h>

int main(){
    float a;
    printf("Enter the value of a: ");
    scanf("%f",&a);

    if(a>0){
        printf("The %.2f is positive",a);
    }
    else{
        printf("The %.2f is negative",a);
    }
    return 0;
}