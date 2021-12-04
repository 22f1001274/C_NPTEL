#include<stdio.h>

// using while for storing and integers.
// we can #define size .
// scanning the value of size.

void main()
{
  int array[10], i = 0, min = 99999;
  printf("Enter 10 Integers\n");
  while (i < 10)
  {
    scanf("%d", &array[i]);
    i++;
  }
  i = 0;
  while (i < 10)
  {
    if (min > array[i])
      min = array[i];
    i++;
  }
  printf("Minimum of array is %d\n", min);
}
 
  
