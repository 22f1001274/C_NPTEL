#include<stdio.h>

// LINEAR SEARCH AND BINARY SEARCH OF SORTED AND UNSORTED ARRAY

int linear_search(int a[], int size, int key)
{
  int pos = 0;
  while ((pos < size) && (a[pos] != key))
    pos++;
    if (pos < size)  
      return pos;   /* return position of match*/
  return -1;  /* no match found */
}
int main()
{
  int arra[] = {12, -3, 78, 67, 6, 50, 19, 10};
  printf("%d\n", linear_search(arra, 8, 5));
}
