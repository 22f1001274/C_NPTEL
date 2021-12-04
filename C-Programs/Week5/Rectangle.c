#include<stdio.h>

// printing a rectangle of 3 rows and 5 columns.

void main()
{
  for (int row = 1;row <=3;row++)
  {  
    for (int col = 1; col <= 5;col++)
      printf(" *");
    printf("\n");
  }
}
