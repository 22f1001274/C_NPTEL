#include<stdio.h>

//COMPLEX NUMBER ADDITION

struct complex
{  
  float re;
  float im;
};
struct complex add(x, y)
struct complex x, y;
{
  struct complex t;
  t.re = x.re + y.re;
  t.im = x.im + y.im;
  return (t);
}
void main()
{
  struct complex a, b, c;
  scanf("%f %f", &a.re, &a.im);
  scnaf("%f %f", &b.re, &b.im);
  c = add(a, b);
  printf("/n %f %f", c.re, c.im);
}
