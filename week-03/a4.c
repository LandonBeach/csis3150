// Assignment 4 source code

#include <stdio.h>
#include <math.h>

int main()
{
  double n = 2.5;

  printf("cos(%.1f) = %.2f\n", n, cos(n));
  printf("exp(%.1f) = %.2f\n", n, exp(n));
  printf("log(%.1f) = %.2f\n", n, log(n));
  printf("%.1f^2.0  = %.2f\n", n, pow(n, 2.0));
  printf("sqrt(%.1f) = %.2f\n", n, sqrt(n));
  printf("ceil(%.1f) = %.2f\n", n, ceil(n));
  printf("floor(%.1f) = %.2f\n", n, floor(n));

  return 0;
}
