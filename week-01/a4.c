// Assignment 4 source code
#include <stdio.h>

int main ()
{
  int n;

  printf("List of squares from 1 to 100:\n");
  
  for(n = 1; n <= 100; n++)
  {
    printf("%d^2 = %d\n", n, n*n);
  }

  return 0;
}
