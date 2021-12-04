#include<stdio.h>

// same 

int change(int x)
{
  printf("Before x = %d\n", x);
  x = x/2;
  printf("After x = %d\n", x);
  return (x);
}

void main()
{
  int x=10, b;
  printf("intially x= %d\n", x);
  b = change(x);
  printf("Now x=%d , b = %d\n", x, b);
} 
