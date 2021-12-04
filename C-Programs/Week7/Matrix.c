#include<stdio.h>

// printing 2d array.

void main()
{
  int arr[10][10];
  int i, j, rows, cols;
  printf("Enter no of rows and columns resp.\n");
  scanf("%d %d", &rows, &cols);
  // reading array as an matrices
  for (i=0;i<rows;i++)
    for (j=0;j<cols;j++)
      scanf("%d", &arr[i][j]);
   // printing matrix
  for (i=0;i<rows;i++)
  {  
    for (j=0;j<cols;j++)
      printf("%d ", arr[i][j]);
    printf("\n");
  }
}

