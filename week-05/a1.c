// Assignment 1 source code

#include <stdio.h>
#include <math.h>

typedef struct
{
  double real;
  double imaginary;
}Complex;

double modulus (Complex c);

int main ()
{
  Complex z1;
  Complex z2;
  Complex *zptr;

  z1.real = 1.0;
  z1.imaginary = 2.0;
  printf("The length of z1 is %f \n", modulus(z1));

  zptr = &z2;
  zptr->real = 3.0;
  zptr->imaginary = 4.0;

  return 0;
}

double modulus (Complex c)
{
  double x = c.real;
  double y = c.imaginary;

  return sqrt(x*x + y*y);
}

Complex add (Complex a, Complex b)
{
  Complex z;
  z.real = a.real + b.real;
  z.imaginary = a.imaginary + b.imaginary;
  return z;
}

Complex multiply (Complex a, Complex b)
{
  Complex z;
  z.real = (a.real * b.real) + (a.imaginary * (b.imaginary * (-1)));
  z.imaginary = (a.real * b.imaginary) + (a.imaginary * b.real);
  return z;
}

void divide (Complex a, Complex b)
{

}
