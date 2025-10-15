#include<stdio.h>

void main()
{
    int  a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    a+b;
    a-b;
    a*b;
    a/b;
    a%b;

    printf("The sum of %d and %d is %d\n",a,b,a+b);
    printf("The difference between %d and %d is %d\n",a,b,a-b);
    printf("The product of %d and %d is %d\n",a,b,a*b);
    printf("The ratio of %d and %d is %d\n",a,b,a/b);
    printf("The remainder when %d is divided by %d is %d",a,b,a%b);

}