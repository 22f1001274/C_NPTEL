#include<stdio.h>

// passing arguments by reference.

void swap (int *x, int *y)
{
  int t;
  t = *x;
  *x = *y;
  *y = t;
}
int main()
{
  int a, b;
  a = 5; b = 20;
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);
  return 0;
}

