#include<stdio.h>

int x = 100;
int main(){
    int total;
    float per;
    printf("Enter the total of 10 subject marks: ");
    scanf("%d",&total);

    per = (total / 1000.0) * x;

    printf("Percentage is %.2f",per);

    return 0;
}