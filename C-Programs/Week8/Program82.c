#include<stdio.h>

// PARAMETER PASSING AND RETURN: 1

int change(int x);
void main()
{
  int a = 10, b;
  printf("Intially a = %d\n", a);
  b = change(a);
  printf("a = %d, b = %d \n", a, b);
}

int change(int x)
{
  printf("Before x = %d \n", x);
  x = x / 2;
  printf("After x = %d\n", x);
  return (x);
}

