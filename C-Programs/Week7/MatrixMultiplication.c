#include<stdio.h>

// multiplying matrix mat1 to mat2
 
void main()
{
  int mat1[2][3] = {1, 2, 3, 4, 5, 6};
  int mat2[3][2] = {10, 11, 20, 21, 30, 31};
  int i, j, k, l, maxResult[2][2];
  for (i=0, k=0;i<2, k<2;i++, k++)    
    for (j=0, l=0;j<3, l<2;j++,l++)
    {  
      if (k == 0 && l == 0) {
        maxResult[k][l] = 0;
        maxResult[k][l] += mat1[i][j] * mat2[j][i];
      }
      if (k == 0 && l == 1) {   
        maxResult[k][l] = 0;
        maxResult[k][l] += mat1[i][j] * mat2[j][i+1];
      }
      if (k == 1 && l == 0) {
        maxResult[k][l] = 0;
        maxResult[k][l] += mat1[i][j] * mat2[j][i-1];
      }
      if (k == 1 && l == 1) {
        maxResult[k][l] = 0;
        maxResult[k][l] += mat1[i][j] * mat2[j][i];
      }
   }
    
  for (int i=0;i<2;i++)
  {
    for (int j=0;j<2;j++)
      printf("%d ", maxResult[i][j]);
    printf("\n");
  }
}
