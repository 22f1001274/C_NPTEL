#include<stdio.h>

// sum of first ten numbers sum = 10 * (11) / 2

void main()
{
  int sum, myIndex;
  sum = 0;
  for (myIndex = 1;myIndex <= 10;myIndex++)
    sum += myIndex;
  printf("%d\n", sum);
}
