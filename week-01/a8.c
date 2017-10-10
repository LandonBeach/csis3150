// Assignment 8 source code

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i, rolls, value1, value2;
  unsigned short SIZE = 12;
  int countArray[SIZE];
  unsigned int seed;

  srand(time(NULL));

  do
  {
    printf("Enter how many times to roll the dice: ");
    scanf("%d", &rolls);

    if (rolls <= 0)
    {
      printf("Please enter a positive integer. Try again. \n");
      printf("Enter how many times to roll the dice: ");
      scanf("%d", &rolls);
    }
  } while (rolls <= 0);

  for (i = 0; i < SIZE; i++)
  {
    countArray[i] = 0;
  }

  for (i = 0; i < rolls; i++)
  {
    value1 = (1 + rand()%6);
    value2 = (1 + rand()%6);
    ++countArray[(value1 + value2) -1];
    printf("Roll %d:     %d, %d \n", (i+1), value1, value2);
  }

  printf("\nList of total rolled: \n");
  for (i = 1; i < SIZE; i++)
  {
    printf("Number of %d's:    %d \n", (i+1), countArray[i]);
  }

  return 0;
}
