#include<stdio.h>

// sum of digits of a number.

void main()
{
  int num, sum = 0;
  scanf("%d", &num);
  int dupNum = num;
  while (dupNum != 0)
  {
    sum += dupNum % 10;
    dupNum /= 10;
  }
  printf("The sum of digits of the number %d is %d\n", num, sum);
}
