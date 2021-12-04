#include<stdio.h>

// factorial till 10.

int main()
{
  int fact = 1, i = 1;
  while (1) 
  {
    fact *= i;
    printf("%d! = %d\n", i, fact);
    i++;
    
    if (i <= 10)
      continue;
    else 
      break;
  }
  printf("factorial of number more than ten is not allowed\n");
}
  
