#include<stdio.h>

// FUNCTION TO FIND THE AVERAGE.

float avg(int array[], int size)
{
  int *p, i, sum = 0;
  p = array;
  for (i=0;i < size;i++)
    sum = sum + *(p+i);
  return ((float)sum / size);
}
int main()
{
  int x[100], k, n;
  scanf("%d", &n);
  for (k=0;k<n;k++)
    scanf("%d", &x[k]);
  printf("\nAverage is %f", avg(x, n));
} 
