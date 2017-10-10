// Assignment 1 source code

#include <stdio.h>

#define true 1
#define false 0

int sameArray(int *array1, int *array2, int length);

int main()
{
  int i;
  int length = 6;
  int array1[length];
  int array2[length];
  int array3[length];

  for (i = 0; i < length; i++)
  {
    array1[i] = i;
    array2[i] = i;
    array3[i] = 9001;
  }

  if(sameArray(array1, array2, length))
  {
    printf("array1 and array2 are the same\n");
  }
  else
  {
    printf("array1 and array2 are NOT the same\n");
  }

  if(sameArray(array2, array3, length))
  {
    printf("array2 and array3 are the same\n");
  }
  else
  {
    printf("array2 and array3 are NOT the same\n");
  }

  return 0;
}

int sameArray(int *array1, int *array2, int length)
{
  int i;

  for (i = 0; i < length; i++)
  {
    if (*(array1 + i) != *(array2 + i))
    {
      return false;
    }
  }

  return true;
}
