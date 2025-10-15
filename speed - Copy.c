#include <stdio.h>
// Function to find GCD using Euclidean Algorithm
int gcd(int a, int b) {
 while (b != 0) {
 int temp = b;
 b = a % b;
 a = temp;
 }
 return a;
}
int main() {
 int num1, num2, lcm;
 // Input numbers
 printf("Enter two numbers: ");
 scanf("%d %d", &num1, &num2);
 // Calculate LCM
 lcm = (num1 * num2) / gcd(num1, num2);
 // Output
 printf("LCM of %d and %d = %d\n", num1, num2, lcm);
 return 0;
}
