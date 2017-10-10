// Assignment 1 source code

#include <stdio.h>
#include <string.h>

int main()
{
  char str1[30];
  char str2[] = "Now is the time ";
  char *pstr;

  strcat(str1, "Now ");
  strcat(str1, "is ");
  strcat(str1, "the ");
  strcat(str1, "time ");

  if(strcmp(str1, str2))
  {
    printf("The strings are the same\n");
  }
  else
  {
    printf("The strings are different\n");
  }

  printf("The length of str1 is %u\n", (unsigned) strlen(str1));
  printf("The length of str2 is %u\n", (unsigned) strlen(str2));

  printf("Splitting str1 into tokens:\n");
  pstr = strtok(str2, " ");

  while(pstr != NULL)
  {
    printf("%s\n", pstr);
    pstr = strtok(NULL, " ");
  }

  return 0;
}
