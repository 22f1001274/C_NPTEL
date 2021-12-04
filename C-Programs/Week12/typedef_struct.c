#include<stdio.h>

// USING TYPE DEF TO SIMPLIFY INTIALISIING VARIABLE
typedef struct
  {
    float real;
    float imag;
  } Complex;
void printComplex(Complex dup)
{
  printf("%f + i%f\n", dup.real, dup.imag);
}

Complex swapComplex(Complex dup1, Complex dup2)
{
  Complex temp;
  temp = dup1;
  dup1 = dup2;
  dup2 = temp;
  return (temp);
}

int main()
{
  Complex a = {1.0, 2.0}, b = {-3.0, 4.0}, c, d; 
  
  c.real = a.real + b.real;
  c.imag = a.imag + b.imag;
  printComplex(c);
  d = swapComplex(a, b);
  
  printComplex(d);
  return 0;
}
