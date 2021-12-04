#include<stdio.h>

// MAXIMUM OF THREE INTEGERS

int maximum (int, int, int);
int main()
{
  int a, b, c;
  
  printf("Enter three integers\n");
  scanf("%d %d %d", &a, &b, &c);
  printf("Maximum is: %d\n", maximum (a, b, c));
}
int maximum (int x, int y, int z)
{
  int max;
  max = x; 
  if (y > max)
    max = y;
  if (z > max)
    max = z;
 return max;
}
 
