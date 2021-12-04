#include<stdio.h>

// to find sum of squares of n numbers

void main()
{
  int sum = 0, n, i;
  scanf("%d", &n);
  for (i = 1;i <= n;i++)
    sum += i * i;
  printf("%d is the sum of squares of d numbers\n", sum, n);
}
