#include<stdio.h>

// use of break statement in loops.

void main()
{
  int fact, i, n;
  scanf("%d", &n);
  fact = 1; i = 1;
  while (i <= n)
  {
    // run a loop break when fact > 100
    fact *= i;
    if (fact > 100)
    {  
      printf("Factorial of %d above 100\n", i);
      break;
    }
    i++;
  }
  i--;
  printf("%d! is = %d \n", i, fact);
}
  
