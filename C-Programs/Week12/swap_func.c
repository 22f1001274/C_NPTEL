#include<stdio.h>

// SWAPING THE STRUCTURE USING FUNCTION

typedef struct 
  {
    float real;
    float imag;
  }Complex;
void swap(Complex a, Complex b)
{
  Complex temp;
  temp = a;
  a = b;
  b = temp;
}
void print(Complex a)
{
  printf("%f + i%f\n", a.real, a.imag);
}
int main()
{
  Complex x = {4.0, 5.0}, y = {10.0, 15.0};
  print(x); print(y);
  swap(x, y);
  print(x); print(y);
  return 0;
}
  
    
  
