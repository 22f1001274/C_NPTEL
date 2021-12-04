#include<stdio.h>

// POINTER IN STRUCTURES.

typedef struct
{
  float real;
  float imag;
}Complex;
void print(Complex *a)
{
  printf("(%f, %f)\n", a->real, a->imag);
}
void swap_ref(Complex *a, Complex *b)
{
  Complex tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}
void main()
{
  Complex x = {10.0, 3.0}, y = {-20.0, 4.0};
  print(&x);print(&y);
  swap_ref(&x, &y);
  print(&x);print(&y);
}

