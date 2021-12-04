#include<stdio.h>
#include<math.h>

// check if number is prime or not

void main()
{
  int num, i = 2, flag;
  scanf("%d", &num);
  flag = (int) sqrtf(num);

  while (i < flag)
  {
    if (num % i == 0)
    {
      printf("%d is not a prime\n", num);
      break;
    }
    if (i == flag - 1)
      printf("%d is a prime\n", num);
    i++;
  }
}      