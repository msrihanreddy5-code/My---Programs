#include<stdio.h>
#include<math.h>

int main(){
    float n;

    printf("Enter the value of n: ");
    scanf("%f",&n);

    if(n>=0){
        printf("The %.2f number is positive number",n);
    }
    else{
        printf("The %.2f number is negative number",n);
    }

    return 0;
}