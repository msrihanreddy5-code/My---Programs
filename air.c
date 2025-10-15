#include <stdio.h>
int main() {
 int a,b;
 printf("Enter the value of a and b: ");
 scanf("%d %d",&a,&b);
 int sum = a + b; 
 int diff = a - b;
 int prod = a * b;
 int div = a / b;
 int mod = a % b;
 int logical = (a > b) && (b > 0); 
 int bitand = a & b; 
 int bitor = a | b; 
 int bitxor = a ^ b;
 int tern = (a > b) ? a : b; 
 printf("sum=%d\n diff=%d\n prod=%d\n div=%d\n mod=%d\n", sum, diff, prod, div, mod);
 printf("logical=%d\n bitand=%d\n bitor=%d\n bitxor=%d\n tern=%d\n", logical, bitand, bitor, bitxor, tern); 
 
 return 0;
}