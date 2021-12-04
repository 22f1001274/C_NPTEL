#include<stdio.h>

// ASSIGNING ONE ARRAY TO ANOTHER ARRAY 

void main()
{
  int b[5], a[5], i;

  for (i=0;i < 5;i++)
  {
    printf("Enter the number");
    scanf("%d", &a[i]);
  }
  for (i=0;i < 5;i++)
  {
    b[i] = a[i];
    printf("Numbers in array b is %d\n", b[i]);
  }
}


