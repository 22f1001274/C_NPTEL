#include<stdio.h>

// passing arguments by also

int main()
{   
  void swap (int x, int y);
  int a, b;
  a= 5; b=20;
  swap(a, b);
  printf("\n a = %d, b = %d\n", a, b);
  // will not be swapped 
}
void swap (int x, int y)
{
  int t;
  t = x;
  x = y;
  y = t;
}
