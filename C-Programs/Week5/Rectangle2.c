#include<stdio.h>

// printing rectangle using while loop

void main()
{
  int row = 1, col = 1;
  while (row <= 3)
  {
    while (col <= 5)
    {
      printf("* ");
      col++;
    }
    col = 1;
    printf("\n");
    row++;
  }
}
