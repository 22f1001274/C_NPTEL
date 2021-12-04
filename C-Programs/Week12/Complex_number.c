#include<stdio.h>

// COMPLEX NUMBER ADDITION USING STRUCTURE.

int main()
{
  struct complex
    {
      float real;
      float complex;
    } a, b, c;
  printf("Enter Complex Number a:");
  scanf("%f %f", &a.real, &a.complex);
  printf("Enter Complex Number b:");
  scanf("%f %f", &b.real, &b.complex);
  
  c.real = a.real + b.real;
  c.complex = a.complex + b.complex;
  printf("\n %f + i%f\n", c.real, c.complex);
  return 0;
}
