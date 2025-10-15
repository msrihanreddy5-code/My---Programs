#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a,b: ");
    scanf("%d %d",&a,&b);

    a = a^b;
    b=a^b;
    a=a^b;

    printf("The value of a is: %d\n",a);
    printf("The value of b is: %d\n",b);

    a-b;

    printf("The difference between %d and %d is %d",a,b,a-b);

    return 0;
}