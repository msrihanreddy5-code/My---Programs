#include<stdio.h>
#include<math.h>

int main(){
    int a;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    if(a>=0){
        if(a % 2 == 0){
            printf("The %d number is even and positive",a);
        }
        else{
            printf("The %d number is odd and positive",a);
        }
    }
    else{
        if(a % 2 ==0){
            printf("The %d number is even and negative",a);
        }
        else{
            printf("The %d number is odd and negative",a);
        }
    }

    return 0;
}