#include<stdio.h>

// SUM OF DIGITS OF A NUMBER USING FUNCTION

int sum_of_digits(int n)
{
  int sum = 0;

  while (n != 0)
  {
    sum = sum + (n % 10);
    n = n / 10;
  }
  return (sum);
}
int main()
{
  int num;
  scanf("%d", &num);
  
  printf("%d is the sum of digits of %d\n", sum_of_digits(num), num);
  return 0;
}

