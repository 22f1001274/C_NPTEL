#include<stdio.h>

// SELECTIVE SORITNG FOR BINARY SEARCH , INCREASING ORDER

int min_loc(int x[], int k, int size)  // for finding the min number in the array
{
  int j, pos;  /* x[pos] is the smallest element found so far */
  pos = k;
  for (j = k + 1;j < size;j++)
    if (x[j] < x[pos])
      pos = j;
  return pos;
} 
/* Sorting in increasing order */

int selsort (int x[], int size)
{
  int k, m, temp;
  for (k = 0;k < size - 1;k++)
  {
    m = min_loc(x, k, size);
    temp = x[k];
    x[k] = x[m];
    x[m] = temp;
  }
} 

int main()
{
  int a[8] = {3, 12, -5, 6, 142, 21, -17, 45};
  selsort (a, 8);
  for (int i=0;i < 8;i++)
    printf("%d ", a[i]);
  printf("\n");
}
