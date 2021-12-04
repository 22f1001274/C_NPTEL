#include<stdio.h>

//BUBBLE SORT COMPARING AND SWAPING ADJACENT NUMBERS YOUTUBE.

void Bub_sort(int A[], int size)
{
  for (int i=0;i < size - 1;i++)
  {
    for (int j=0;j < size - 1 - i;j++)
    {
      if (A[j] > A[j +1])
      { 
        int temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
}
int main()
{
  int a[5] = {15, 16, 6, 8, 5};
  Bub_sort(a, 5);
  for (int i=0;i<5;i++)
    printf("%d ", a[i]);
  printf("\n");
}
  
