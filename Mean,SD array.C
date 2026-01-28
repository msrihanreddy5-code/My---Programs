#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    float sd,var,mean;
    printf("Enter number of elements: \n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    mean = sum / n;
    for(int i=0;i<n;i++){
        sd += pow(arr[i]-mean,2);
    }
    float Variance = sqrt(sd / n);

    printf("Average = %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", sd);
    printf("Variance = %.2f\n", Variance);
    return 0;
}
