// Assignment 1 source code

#include <stdio.h>

int main()
{
  int current, prev, next, i, n;

  do
  {
    printf("Enter how many Fibonacci numbers to compute: ");
    scanf("%d", &n);

    if (n < 0)
    {
      printf("Invalid input. Please enter an integer greater than 0.\n");
      printf("Enter how many Fibonacci numbers to compute: ");
      scanf("%d", &n);
    }
  } while (n < 0);

  current = 0;
  prev = 0;
  next = 1;

  printf("Fibonacci Sequence \n");
  for (i = 0; i < n; i++)
  {
    printf("%d  ", current);
    current = prev + next;
    prev = next;
    next = current;
  }

  printf("\n");
  return 0;
}
