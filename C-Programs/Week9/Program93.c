#include<stdio.h>

//STORING MARKS OF STUDENTS 

void acq_d(int A[][], int row, int col)
{
  int i, j;
  for (i=0;i < row;i++)
  {
    for(j=0;j < col;j++)
    {  
      printf("Enter value at row no.%d and col no.%d\n", i, j);
      scanf("%d", A[i][j]);
    }
  }
}
int Find_Total(int B[][], int row, int col, int A[][])
{
  int i, j;
  int val;
  for (i = 0;i < row;i++)
  {
    for (j=0;j < col;j++)
    {
      int sum = 0;
      sum = sum + A[i][j];
      val = sum;
    }
  if (i == 0)
    B[i][j] = val;
  }
  return (B[row][col]);
}
int Find_Max(int C[][], int row, int col)
{
  int i=0, j=0;
  int max = C[i][j];
  for (i=0;i < row;i++)
  {
    for (j=0;j < col;col++)
    { 
      if (C[i][j] > max)
        max = C[i][j];
    }
  }
  return (max);
}
int main()
{
  int Roll[5] = {1, 2, 3, 4, 5}, Marks[5][4], Total[4][1];
  char Subject[4] = {"l", "s", "m", "h"}
  acq_d(Marks, 5, 4);
  Find_Total(Total, 4, 1, Marks);
  printf("maximum marks = %d \n", Find_Max(Total, 4, 1));
}


  
