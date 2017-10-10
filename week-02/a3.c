// Assignment 3 source code

#include <stdio.h>

int main()
{
  int n;
  int *iptr = &n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  printf("The pointer iptr contains the address of the integer n.\n");
  printf("iptr = %p \n", iptr);
  printf("The value contained in n = %d \n", n);
  printf("The expression &n returns the address of n.\n");
  printf("&n = %p \n", &n);
  printf("The * operator dereferences the pointer iptr and returns the value of the what it is pointing to.\n");
  printf("*iptr = %d \n", *iptr);

  return 0;
}
