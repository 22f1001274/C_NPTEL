#include<stdio.h>

// FUNTION NOT RETURNING A VALUE

void div7(int n)
{
  (n % 7 == 0)? printf("%d is divisible by 7\n", n) : printf("%d is not divisible by 7\n", n);
  return; // optional
}

int main()
{
  int a;
  scanf("%d", &a);
  div7(a);
}
