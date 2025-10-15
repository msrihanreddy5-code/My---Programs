#include<stdio.h>

void main()
{
    int a,rev,r;
    rev = 0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    while(a != 0){
        r= a % 10;
        rev = rev * 10 + r;
        a = a/10;
    }
    printf("The reverse number is %d",rev);
}