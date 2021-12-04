#include<stdio.h>

// Find the largest of three numbers.

void main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  // composite condition check
  if ((a >= b) && (a >= c))
    printf("\n Largest number is %d \n", a);
  else
    if ((b >=a) && (b >= c))
      printf("\n Largest number is %d \n", b);
    else 
      printf("\n Largest number is %d \n", c);
}

