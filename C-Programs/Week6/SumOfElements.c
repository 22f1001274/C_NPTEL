#include<stdio.h>
#define size 5

// For saving and adding elements in array.

void main()
{
  int num[size], sum = 0;
  float avg;
  printf("Enter 5 Integers\n");
  for (int i = 0;i < size;i++)  
    scanf("%d", &num[i]);
  for (int i = 0;i < size;i++)
    sum += num[i];
  avg = sum / size;
  printf("%d is the sum of elements of arrays and similarly avg is %f\n", sum,          avg);
} 
  
  
