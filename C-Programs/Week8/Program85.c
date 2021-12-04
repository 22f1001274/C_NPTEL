#include<stdio.h>

// same

int interchange(int x, int y)
{
  int temp;
  printf(" x = %d, y =%d\n", x, y);
  temp = x; x = y; y= temp;
  printf("x = %d ,y = %d\n", x, y);
}
void main()
{
  int x= 10, y=5;
  printf("x = %d, y= %d\n", x, y);
  interchange(x, y);
  printf("x= %d, y= %d \n", x, y);
  
}
