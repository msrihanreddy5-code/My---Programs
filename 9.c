#include<Stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    if(a % 2 == 0){
        printf("The %d number is even.",a);
    }
    else{
        printf("The %d number is odd.",a);
    }
    return 0;
}