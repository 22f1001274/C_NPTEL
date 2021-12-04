#include<stdio.h>

// printing inverted triangle using while.

void main()
{
  int row = 0, space = 0, col = 1;
  while (row < 5)
  {
    while (space < row)
    {  
      printf(" ");
      space++;
    }
    space = 0;
    while (col <= 5 - row)
    {
      printf("* ");
      col++;
    }
    col = 1;
    printf("\n");
    row++;
  }
}
