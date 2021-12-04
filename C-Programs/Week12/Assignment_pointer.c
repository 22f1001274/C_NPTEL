#include<stdio.h>

// ASSIGNING THE VALUES USING POINTER.(*&x = x)

int main()
{
  int a, c = 5, b, *p;
  a = 4 * (c + 5);
  p = &c;
  b = 4 * (*p + 5);
  printf("a = %d b=%d\n", a, b);
  a = *p;
  printf("%d", a);
  return 0;
}
  
