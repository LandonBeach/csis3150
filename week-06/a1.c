// Assignment 1 source code

#include <stdio.h>
#include <math.h>
#include <complex.h>

#define cols 2000
#define rows 2000
int Mand[cols][rows];

int iterate_point (double complex c);

int main()
{
  double crmin = -0.75;
  double crmax = -0.74;
  double cimin = -0.138;
  double cimax = -0.127;
  FILE *fout;

  fout = fopen("mand.ppm", "w");

  int x, y;
  int color;
  double complex c;
  double complex imag = 0.0 + 1.0i;
  double dx = (crmax - crmin)/cols;
  double dy = (cimax - cimin)/rows;

  for (y = 0; y < rows; y++)
  {
    for(x = 0; x < cols; x++)
    {
      c = (crmin + x*dx) + (cimin + y*dy)*imag;
      Mand[x][y] = iterate_point(c) + 65;
    }
  }

  fprintf(fout, "P3 \n%d %d\n255\n", cols, rows);

  for (y = 0; y < rows; y++)
  {
    for (x = 0; x < cols; x++)
    {
      color = Mand[x][y];
      fprintf(fout, "%d\n%d\n%d\n", color, color, color);
    }
  }

  fclose(fout);
  return 0;
}

int iterate_point (double complex c)
{
  double complex z = 0.0 + 0.0i;
  int iterations = 0;
  int k;

  for (k = 0; k < (255-64); k++)
  {
    z = z*z + c;
    if (sqrt(z*conj(z)) > 50)
    {
      break;
    }
    else
    {
      ++iterations;
    }
  }

  return iterations;
}
