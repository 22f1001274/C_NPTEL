#include<stdio.h>

// printing triangle using while.

void main()
{
  int row = 1, col = 1;
  while (row <= 5)
  {
    while (col <= row)
    {  
      printf("* ");
      col++;
    }
    col = 1;
    printf("\n");
    row++;
  }
}
    
 
