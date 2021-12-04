#include<stdio.h>

// compute sum of five numbers

void main()
{
  int sum = 0, n = 5, count = 0, num;
  while (count < 5) 
  {
    printf("Please enter a number\n");
    scanf("%d", &num);
    // shorthand operators
    sum += num;
    count++;
  }
  printf("%d is the sum of five numbers\n", sum);
}
