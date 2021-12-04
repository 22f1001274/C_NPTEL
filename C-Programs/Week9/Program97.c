#include<stdio.h>

// INSERTION SORTING

void InsertSort (int list[], int size)
{
  int item;
  for (int i=1;i < size;i++)
  {
    item = list[i];
    for (int j = i-1; (j >= 0) && (list[j] > list[i]); j-- && i--)
    {  
      list[i] = list[j];
      list[j] = item;
    }  
  }  
}
int main()
{
  int arr[5] = {12, 7, 5, 17, 9};
  InsertSort (arr, 5);
  for (int i=0;i < 5;i++)
    printf("%d ", arr[i]);
  printf("\n");
}

