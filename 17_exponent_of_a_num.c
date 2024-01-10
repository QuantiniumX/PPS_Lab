#include<math.h>
#include<stdio.h>
int main() {
   double base, exp, val;
   printf("Enter base value: ");
   scanf("%lf", &base);
   printf("Enter exponent value: ");
   scanf("%lf", &exp);
   // calculates the power
   val = pow(base, exp);
   printf("%.1lf^%.1lf = %.2lf\n", base, exp, val);
   return 0;
}