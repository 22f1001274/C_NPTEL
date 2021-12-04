#include<stdio.h>

// print char matrix.

void main()
{
  char str[10][10];
  int row, col;
  for (row=0;row<2;row++)
    for (col=0;col<2;col++)
      scanf("%c", &str[row][col]);
  for (row=0;row<2;row++)
  {  
    for (col=0;col<2;col++)
      printf("%c ", str[row][col]);
    printf("\n");
  }
}
