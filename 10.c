#include<stdio.h>

int main(){
    int num, rev = 0, r, original;
    printf("Enter the value of a number: ");
    scanf("%d", &num);
    
    original = num; 

    while(num > 0){
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    
    if(original == rev){
        printf("The number is palindrome");
    }
    else {
        printf("The number is not palindrome");
    }
    
    return 0;
}
