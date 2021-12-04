#include<stdio.h>

// ADDING AND RETURNING STRUCTURES.

typedef struct
{
  float real;
  float imag;
}Complex;
Complex add(Complex a, Complex b)
{
  Complex tmp;
  tmp.real = a.real + b.real;
  tmp.imag = a.imag + b.imag;
  
  return (tmp);
}
int main()
{ 
  Complex x = {1.0, 2.0}, y = {3.0, 4.0};
  Complex z = add(x, y);
  printf("%f + i%f\n", z.real, z.imag);
  return 0;
}
