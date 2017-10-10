// Assignment 2 source code

#include <stdio.h>
#include <math.h>

int main()
{
  int height  = 200;
  int width  = 200;
  int color  = 0;
  int i,j;
  FILE *fout;

  fout = fopen("testPPM.ppm", "w");
  fprintf(fout, "P3 \n%d %d\n255\n", height, width);

  for (i = 1; i <= width; i++)
  {
    for (j = 1; j <= height; j++)
    {
      color = (int)fabs(255.0*sin(i/10.0)*floor(cos(j/10.0)));
      fprintf(fout, "%d\n%d\n%d\n", color, color, color);
    }
  }

  fclose(fout);
  printf("Opening the file in GIMP... ");
  system("gimp testPPM.ppm");
  printf("Done!\n");
}
