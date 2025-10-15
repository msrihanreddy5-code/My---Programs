#include<stdio.h>

int main(){
    long long int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("The %d number is even.",a);
    }
    else{
        printf("The %d number is odd.",a);
    }
    return 0;
}