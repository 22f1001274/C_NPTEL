#include<stdio.h>

// Compute Hcf or Gcd of two numbers.
/* Two concepts: 
   1) one is subtracting each other untill they are equal.
   2) other is by using modulu and remainder
       i) find remainder and divide it by divisor
       ii) when u get remainder zero divisor is the hcf. */
   
void main()
{
  int num1, num2, rema;
  scanf("%d %d", &num1, &num2);
  if (num2 > num1)
    rema = num1;num1 = num2;num2 = rema;
  while (num1 % num2 != 0)
  {
    rema = num1 % num2;
    num1 = num2;
    num2 = rema;
  }
  printf("%d is the HCF or GCD of the numbers\n", num2);
}
