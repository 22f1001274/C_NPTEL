#include<stdio.h>

// BUBBLE SORT NPTEL.

void swap(int *x, int *y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}
void bubble_sort(int x[], int n)
{
  int i, j;
  for (i=n-1;i>0;i--)
  {
    for (j=0;j<i;j++)
      if (x[j] > x[j+1])
        swap(&x[j], &x[j+1]); // here swap address because of array and no need of return.

  }
}
int main()
{
  int x[] = {-45, 89, -65, 87, 0, 3, -23, 19, 56, 21, 76, -50};
  int i;
  for (i=0;i<12;i++)
    printf("%d ", x[i]);
  printf("\n");
  bubble_sort(x, 12);
  for (i=0;i<12;i++)
    printf("%d ", x[i]);
  printf("\n");
}


