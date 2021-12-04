#include<stdio.h>

// matrix addition.
  
void main()
{
  int mat1[5][5], mat2[5][5], matResult[5][5];
  printf("Enter no of rows and cols\n");
  int row, col,i,j;
  scanf("%d %d", &row, &col);
  for (i=0;i<row;i++)
    for (j=0;j<col;j++)
      scanf("%d %d", &mat1[i][j], &mat2[i][j]);
  for (i=0;i<row;i++)
     for (j=0;j<col;j++)
       matResult[i][j] = mat1[i][j] + mat2[i][j];
  for (i=0;i<row;i++)
  {  
    for (j=0;j<col;j++)
      printf("%d ", matResult[i][j]);
    printf("\n");
  }
}
