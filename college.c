#include<stdio.h>
#include <math.h>

void main(){
    float a,b,c,root1,root2,discriminant;
    printf("Enter the value of a,b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    if(discriminant > 0){
        root1= (-b + sqrt(discriminant)) / (2*a);
        root2= (-b - sqrt(discriminant)) / (2*a);
        printf("Real and distinct roots: %.2f and %.2f\n",root1,root2);
}
    else if (discriminant == 0){
        root1 = -b / (2*a);
        printf("Real and equal roots: %.2f and %.2f\n",root1,root1);
    }
    else{
        float realPart = -b / (2*a);
        float imagPart = sqrt(-discriminant) / (2*a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n",realPart,imagPart,realPart,imagPart);
    }
}