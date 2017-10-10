// Assignment 4 source code
#include <stdio.h>

int *square (int *array, int length);

int main ()
{
  int length;
  int i;

  do
  {
    printf("Enter a positive value for integer n: ");
    scanf("%d", &length);

    if (length <= 0)
    {
      printf("Invalid input. Please enter a positive integer.\n");
      printf("Enter a positive value for integer n: ");
      scanf("%d", &length);
    }
  } while (length <= 0);

  int array[length];
  int *squaredArray;

  for (i = 0; i < length; i++)
  {
    array[i] = i;
    printf("array[%d] = %d\n", i, i);
  }

  squaredArray = square(&array[1], (length - 1));

  for (i = 0; i < (length - 1); i++)
  {
    printf("%d^2 = %d\n", (i + 1), *(squaredArray + i));
  }

  return 0;
}

int * square (int *array, int length)
{
  int tempArray[length];
  int *iptr = tempArray;
  int i;

  for (i = 0; i < length; i++)
  {
    tempArray[i] = (array[i] * array[i]);
    printf("tempArray[%d] = %d\n", i, tempArray[i]);
  }

  return iptr;
}
