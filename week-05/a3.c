// Assignment 3 source code

#include <stdio.h>
#include <math.h>

int main()
{
  int height  = 400;
  int width  = 400;
  int color  = 0;
  int i,j;
  FILE *fout;

  fout = fopen("testPPM01.ppm", "w");
  fprintf(fout, "P3 \n%d %d\n255\n", height, width);

  for (i = 1; i <= width; i++)
  {
    for (j = 1; j <= height; j++)
    {
      color = (int)fabs(255.0*tan(i/7.0)*floor(tan(j/15.0)));
      fprintf(fout, "%d\n%d\n%d\n", color, color, color);
    }
  }

  fclose(fout);

  fout = fopen("testPPM02.ppm", "w");
  fprintf(fout, "P3 \n%d %d\n255\n", height, width);

  for (i = 1; i <= width; i++)
  {
    for (j = 1; j <= height; j++)
    {
      color = (int)fabs(255.0*cos(i/10.0)*floor(tan(j/7.0)));
      fprintf(fout, "%d\n%d\n%d\n", color, color, color);
    }
  }

  fclose(fout);
}
