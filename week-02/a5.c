// Assignment 5 source code

#include <stdio.h>
void squaredByValue(int n );
void squaredByReference(int *iptr);

int main()
{
  int n = 10;

  printf("The original value of n is %d\n", n);
  squaredByValue(n);

  printf("The value of n after call-by-value is %d\n", n);

  squaredByReference(&n);
  printf("The value of n after call-by-reference is %d\n", n);

  return 0;
}

void squaredByValue(int n)
{
  n = n*n;
  printf("Input square is %d\n", n);
}

void squaredByReference(int *iptr)
{
  *iptr = (*iptr)*(*iptr);
  printf("Input square is %d\n", *iptr);
}
