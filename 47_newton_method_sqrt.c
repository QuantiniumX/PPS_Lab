#include <stdio.h>
#include <math.h>

double squareRoot(double x, double epsilon) {
  double guess = x / 2.0;
  while (1) {
    double new_guess = 0.5 * (guess + x / guess);
    if (fabs(new_guess - guess) < epsilon) {
      return new_guess;
    }
    guess = new_guess;
  }
}

int main(void) {
  double number, epsilon;

  printf("Enter a number: ");
  scanf("%lf", &number);

  printf("Enter the epsilon value (e.g., 0.00001): ");
  scanf("%lf", &epsilon);

  if (number < 0) {
    printf("Cannot find the square root of a negative number.\n");
  } else {
    double result = squareRoot(number, epsilon);
    printf("Square root of %.2f is approximately %.5f\n", number, result);
  }

  return 0;
}
