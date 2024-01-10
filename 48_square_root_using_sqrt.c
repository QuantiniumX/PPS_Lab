#include <math.h>
#include <stdio.h>

int main(void) {
  double number;

  printf("Enter a number: ");
  scanf("%lf", &number);

  if (number < 0) {
    printf("Cannot find the square root of a negative number.\n");
  } else {
    double result = sqrt(number);
    printf("Square root of %.2f is %.5f\n", number, result);
  }

  return 0;
}
