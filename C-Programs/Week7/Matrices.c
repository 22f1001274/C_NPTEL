#include<stdio.h>

// Printing char matrix and int matrix side by side.

void main()
{
  char str[10][10];
  int arr[10][10];
  int i, j;
  for (i=0;i<2;i++)
    for(j=0;j<4;j++)
    { 
      printf("Enter column %d of row %d\n",j+1, i+1);
      if (j < 2)
        scanf("%d", &arr[i][j]);
   
      if (j > 1)
        scanf("%c", &str[i][j]);
    }
  for (i=0;i<2;i++)
  {
    for (j=0;j<4;j++)
    {
      if (j < 2)
        printf("%d ", arr[i][j]);
      if (j > 1)
        printf(" %c", str[i][j]);
    }
    printf("\n");
  }
}
    
