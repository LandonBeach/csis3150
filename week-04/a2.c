// Assignment 2 source code

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int num;
  int i;

  for (i = 0; argv[i] != '\0'; i++)
  {
    num += atoi(argv[i]);
  }

  printf("The sum is %d\n", num);
  return 0;
}
