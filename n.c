#include<stdio.h>

int main(){
    long long int n;

    printf("Enter a number: ");
    scanf("%lld",&n);

    if(n%2==0){
        printf("The %lld number is even",n);
    }
    else{
        printf("The %lld number is odd",n);
    }

    return 0;
}