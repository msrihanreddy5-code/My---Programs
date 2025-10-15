#include<stdio.h>

int main(){
    float a,b,sum,product,div,diff;

    printf("Enter the value of a and b: ");
    scanf("%f %f",&a,&b);

    sum = a+b;
    product = a*b;
    diff = a-b;

    printf("Result: \n");
    printf("The sum of %.2f and %.2f is %.2f\n",a,b,sum);
    printf("The product of %.2f and %.2f is %.2f\n",a,b,product);
    printf("The difference of %.2f and %.2f is %.2f\n",a,b,diff);

    if(b!= 0){
        div = a/b;
        printf("The value of division is %.2f\n",div);
    }
    else{
        printf("Division is not possible\n");
    }

    return 0;
}