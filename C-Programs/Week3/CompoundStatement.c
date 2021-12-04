#include<stdio.h>

// Branching if else compound statement

void main()
{
  int num;
  scanf("%d", &num);
  if (num >= 5) 
  {
    num = ++num;
    printf("\n New value of number is %d\n", num);
  }
  else
    printf("\nNumber is less 5\n");
}
