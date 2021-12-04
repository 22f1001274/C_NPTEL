#include<stdio.h>

// check if number is prime or not

void main()
{
  int num, i = 2, flag;
  scanf("%d", &num);
  
  while (i < num)
  {
    if (num % i == 0)
    {
      printf("%d is not a prime\n", num);
      break;
    }
    if (i == num - 1)
    {
      num % i != 0;
      printf("%d is a prime\n", num);   
    }
    i++;
  }      
}
