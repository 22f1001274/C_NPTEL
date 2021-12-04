#include<stdio.h>

// SAME

int change(int x)
{
  printf("before x= %d\n", x);
  x= x/2;
  printf("after x= %d \n", x);
  return (x);
}
void main()
{
  int x = 10, b;
  printf("intialise x= %d\n", x);
  x = change(x);
  printf("x = %d, b= %d\n", x, x);
}

