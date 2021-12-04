#include<stdio.h>

// Compute sum of n numbers using for loop

void main()
{
  int sum = 0, i, n, num;
  
  printf("How many numbers you have to add\n");
  scanf("%d", &n);
  
  for (i = 0;i < n;i++)
  {
    printf("Please enter an integer\n");
    scanf("%d", &num);
    sum += num;
  }
  printf("%d is the Sum\n", sum);
}
