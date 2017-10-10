// Assignment 5 source code

#include <stdio.h>

int main ()
{
  int num;

  printf("Please enter a number: ");
  scanf("%d",&num);

  // odd or even?
  if(num % 2 == 0)
  {
    printf("%d is even\n", num);
  }
  else
  {
    printf("%d is odd\n", num);
  }

  return 0;
}
