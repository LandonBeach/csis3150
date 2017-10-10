// Assignment 3 source code

#include <stdio.h>
#include <stdlib.h>

int main()
{
  long int memory = 0;
  int *a[1000000];
  int j;

  for (j = 0; j < 1000000; j++)
  {
    a[j] = (int *) malloc(10000000 * sizeof(int));
    memory += (10000000 * sizeof(int));
    printf("%ld\n", memory);
  }

  return 0;
}
