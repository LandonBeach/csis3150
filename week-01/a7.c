// Assignment 7 source code

#include <stdio.h>
#include <math.h>

#define PI 3.141592654

int main()
{
  int n;
  double i;

  printf("Enter the number of values to compute: ");
  scanf("%d", &n);

  while(n < 0)
  {
    printf("Invaild input. Please enter a positive number.\n");
    printf("Enter the number of values to compute: ");
    scanf("%d", &n);
  }

  for(i = (2*PI)/n; i <= (2*PI); i += (2*PI)/n)
  {
    printf("sine(%.2f) = %.2f\n", i, (double)sin(i));
  }

  return 0;
}
