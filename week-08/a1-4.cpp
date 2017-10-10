// Week 4

#include <cstdio>
#include <cstdlib>
#include <string>

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
