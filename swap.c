#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    printf("The value a is %d\n",a);
    printf("The value of b is %d",b);

    return 0;
}