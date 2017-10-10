
// Assignment 2 source code

#include <stdio.h>

int main()
{
  int n;
  int *iptr = &n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  printf("The pointer iptr contains the address of the integer n. \n");
  printf("iptr = %p \n", iptr);
  printf("The value contained in n = %d \n", n);
  printf("The expression &n returns the address of n. \n");
  printf("&n = %p \n", &n);

  return 0;
}
