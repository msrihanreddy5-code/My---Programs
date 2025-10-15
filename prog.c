#include<stdio.h>

int main(){
    int num,count=0,r,original;

    printf("Enter the number: ");
    scanf("%d",&num);
    original = num;


    while(num !=0){
        r = num % 10;
        count++;
        num = num / 10;
    }
    printf("The number of digits in %d are %d",original,count);

    return 0;
}