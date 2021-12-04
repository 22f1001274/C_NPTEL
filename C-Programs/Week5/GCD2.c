#include<stdio.h>

// Gcd using subtracting method

void main()
{
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  while (num1 != num2)
  {  
    if (num1 > num2)
      num1 -= num2;
    else 
      num2 -= num1;
  }
  printf("GCD or HCF of two numbers is %d\n", num1);
} 
