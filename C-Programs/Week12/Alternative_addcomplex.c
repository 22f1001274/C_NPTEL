#include<stdio.h>

//ALTERNATIVE WAY OF USING POINTERS.

struct complex 
{
  float re;
  float im;
};
void main()
{
  struct complex a, b, c;
  scanf("%f %f", &a.re, &a.im);
  scanf("%f %f", &b.re, &b.im);
  add(&a, &b, &c);
  printf("\n %f %f\n", c.re, c.im);
}
void add (x, y, t)
struct complex *x, *y, *t;
{
  t->re = x->re + y->re;
  t->im = x->im + y->im;
}
