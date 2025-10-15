#include<stdio.h>

void main()
{
    long long int a;
    printf("Please enter the value of a: ");
    scanf("%lld",&a);

    if(a%2 == 0){
        printf("The %lld number is even.",a);
    }
    else{
        printf("The %lld number is odd.",a);
    }
}