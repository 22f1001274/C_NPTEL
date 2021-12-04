#include<stdio.h>

// Finding the key in an array and its postion (LINEAR SEARCH).

void main()
{
  int list[5] = {4, 5, 6, 4, 8};
  int key = 4, found = 0;
  
  for (int i=0;i<5;i++)
    if (list[i] == key)
    {  
      found = 1;
      printf("Key found at %d\n", i);
    }
  if (found == 0) 
    printf("Key not found\n");
}
