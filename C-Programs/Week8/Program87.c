#include<stdio.h>

// sum of arrays and using call of reference no call of value 

void VectorSum (int a[], int b[], int vsum[], int length)
{
  int i;
  for (i=0;i < length;i++)
    vsum[i] = a[i] + b[i];
}
void PrintVector (int a[], int length)
{
  int i;
  for (i=0;i < length;i++)
    printf("%d ", a[i]);
}
void main()
{
  int x[3] = {1, 2, 3}, y[3] = {4, 5, 6}, z[3];
  VectorSum (x, y, z, 3);
  PrintVector (z, 3);
} 

