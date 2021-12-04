#include<stdio.h>

// check weather arrays are equal or not.

void main()
{
  // arrays must have same size
  int a[4], b[4], i, flag = 0;
  for (i=0;i<4;i++)
  {
    printf("Enter integers for array a and b resp\n");
    scanf("%d %d", &a[i], &b[i]);
  }
  for (i=0;i<4;i++)
  {
    if (a[i] == b[i])
      flag = 1;
    else
    {
      flag = 0;
      break;
    }
  }
  printf("Value of flag is %d\n", flag);
}
