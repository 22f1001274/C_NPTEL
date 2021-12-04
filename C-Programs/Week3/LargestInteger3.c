#include<stdio.h>

// using if statement only.

void main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if ((a >= b) && (a >= c))
    printf("Largest Number is %d\n", a);
  if ((b >= a) && (b >= c))
    printf("Largest Number is %d\n", b);
  if ((c >= a) && (c >= b))
    printf("Largest Number is %d\n", c);
}
