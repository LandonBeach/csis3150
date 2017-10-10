// Assignment 6 source code
#include <stdio.h>
#include <math.h>

int main()
{
  double x1 = 4.0;
  double y1 = 2.0;
  double x2 = 8.0;
  double y2 = 4.0;
  double distance = sqrt(pow((x2-x1),2.0) + pow((y2-y1),2.0));
  
  printf("Point 1 = (%.1f, %.1f) \n", x1, y1);
  printf("Point 2 = (%.1f, %.1f) \n", x2, y2);
  printf("Distance between the points = %f \n", distance);
  
  return 0;
}
