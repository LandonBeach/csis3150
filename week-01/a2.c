// Assignment 2 source code
#include <stdio.h>

int main ()
{
  int first;
  int second;

  printf("Please enter a number: ");
  scanf("%i", &first);

  printf("Please enter a second number: ");
  scanf("%i", &second);

  printf("\n%i + %i = %i\n", first, second, (first + second));
  printf("%i - %i = %i\n", first, second, (first - second));
  printf("%i * %i = %d\n", first, second, (first * second));
  printf("%i / %i = %f\n", first, second, ((float)first / (float)second));
  printf("%i mod %i = %i\n", first, second, (first % second));

  // Relational Operators
  if (first > second)
  {
    printf("%i is greater than %i\n", first, second);

  }
  else if (first >= second)
  {
    printf("%i greater than or equal to %i\n", first, second);
  }
  else if (first < second)
  {
    printf("%i is less than %i\n", first, second);
  }
  else
  {
    printf("%i is less than or equal to %i\n", first, second);
  }

  // Are they the same integer?
  if (first == second)
  {
    printf("%i and %i are the same integer\n", first, second);
  }
  else
  {
    printf("%i and %i are NOT the same integer\n", first, second);
  }

  // AND Operator
  if (1 && 1)
  {
    printf("1 && 1 = true\n");
  }
  if (1 && 0){}
  else
  {
    printf("1 && 0 = false\n");
  }
  if (0 && 0){}
  else
  {
    printf("0 && 0 = false\n");
  }

  // OR Operator
  if (1 || 1)
  {
    printf("1 || 1 = true\n");
  }
  if (1 || 0)
  {
    printf("1 || 0 = true\n");
  }
  if (0 || 0){}
  else
  {
    printf("0 || 0 = false\n");
  }

  // NOT Operator
  if (!1){}
  else
  {
    printf("!1 = false\n");
  }
  if (!0)
  {
    printf("!0 = true\n");
  }

  return 0;
}
