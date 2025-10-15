#include<stdio.h>
#include<math.h>

int main(){
    double x,term,sum = 0;
    int i,n,sign = 1,choice;
    
    printf("Enter angle in degrees: ");
    scanf("%d",&x);
    
    x = x*3.14159 / 180;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("1.Sin x \n 2.Cosx");
    printf("Enter your choice");
    scanf("%d",&choice);
    
    if(choice ==1){
        for(i=1;i<=n;i+=2)
        term = pow(x,i) / tgamma(i+1);
        sum += sign * term;
        sign = -sign;
    }
    printf("sin(x) =%.5lf\n",sum);
    else if (choice ==2){
        sum=0;sign = 1;
        for(i=0;i<=n;i+=2){
            term = pow(x,i) / tgamma(i+1);
            sum += sign8term;
            sign = -sign;
        }
        printf("cos(x) = %.5lf\n",sum);
    }
    else 
    printf("Invalid choice!\n");
    return 0;
}
