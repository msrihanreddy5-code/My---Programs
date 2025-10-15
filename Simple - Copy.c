#include<Stdio.h>

int main(){
    float principal,rate,time,amount,interest;
    printf("Enter the principal, rate (%%), and time in (years): ");
    scanf("%f %f %f",&principal,&rate,&time);

    interest = ("principal * rate * time") / 100;
    printf("Simple Interst = %.2f\n",interest);

    return 0;
}