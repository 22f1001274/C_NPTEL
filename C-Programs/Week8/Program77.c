#include<stdio.h>

// TO FIND SUM OF SQUARE OF NUMBERS

int square(int x)
{
  int y;
  y = x * x;
  return (y);
}

void main()
{
  int a, b, sum_sq;
  
  printf("Give value of a and b\n");
  scanf("%d %d", &a, &b);
  
  sum_sq = square(a) + square(b);

  printf("Sum of squares = %d \n", sum_sq);
}
