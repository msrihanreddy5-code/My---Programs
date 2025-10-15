#include<stdio.h>

void main(){
    int a,b,c,d,e,f,g;
    printf("Enter the value of a,b");
    scanf("%d %d",&a,&b);
    c = a+b;
    d = a-b;
    e = a*b;
    f=a/b;
    g=a%b;

    printf("The sum of %d and %d is %d\n",a,b,c);
    printf("The difference between %d and %d is %d\n",a,b,d);
    printf("The product of %d and %d is %d\n",a,b,e);
    printf("The ratio of %d and %d is %d\n",a,b,f);
    printf("The remainder when %d is divided by %d is %d\n",a,b,g);
}