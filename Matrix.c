#include<stdio.h>
int main(){
    int A[3][3];
    int esum=0,osum=0;
    int i,j;
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(A[i][j]%2==0){
                printf("Even number: %d\n",A[i][j]);
                esum+=A[i][j];
            }
            else{
            printf("Odd number: %d\n",A[i][j]);
            osum+=A[i][j];
            }
        }
    }
        printf("Sum : %d\n",esum);
        printf("Sum: %d\n",osum);
    return 0;
}
