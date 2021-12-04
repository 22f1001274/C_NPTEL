#include<stdio.h>

// Minimum of a set of 10 numbers.

void main()
{
  int array[10], min;
  printf("Enter 10 integers:\n");
  // Reading the array
  for (int i = 0;i < 10;i++)
    scanf("%d", &array[i]);
  // Printing the array
  for (int i = 0;i < 10;i++)
    printf("The value of a[%d] is %d\n", i, array[i]);
  min = 99999;
  for (int i = 0;i < 10;i++)
    if (min > array[i])
      min = array[i];
  printf("\nMinimum in the array is %d\n", min);
}
  
