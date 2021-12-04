#include<stdio.h>

// Finding key and count number of times keys are in an array

void main()
{
  int list[5] = {3, 6, 7, 3, 2}, i;
  int count = 0, found = 0, key = 3;
  
  for (i=0;i<5;i++)
    if (list[i] == key)
    {
      found = 1;
      count++;
      printf("Key is found at %d\n", i);
    }
  if (found == 0)
    printf("Key is not found\n");
  else 
    printf("Key is found %d times\n", count);
}
