/*Simple interst*/
#include<stdio.h>
void main()
{
    float SI,P,T,R=6.5;
    printf("Enter Principal value and time period in years ");
    scanf("%f %f",&P,&T);
    SI = (P*T*R)/100;
    printf("Simple Intrest is %.2f ",SI );
}