#include<stdio.h>

// printing inverted triangle equilateral.

void main()
{
  for (int row = 0;row < 5;row++)
  {
    for (int spaces = 0; spaces < row;spaces++)
      printf(" ");
    for (int col = 1;col <= 5 - row;col++)
      printf("* ");
    printf("\n");
  }
}

