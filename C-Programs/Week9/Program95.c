#include<stdio.h>

// BINARY SEARCH FUNTION FOR ASCENDING ORDER ARRAY.

int bin_search(int x[], int size, int key)
{
  int L = 0 , R = size - 1 , mid;
  
  while (L+1 != R)
  {
    mid = (L + R) / 2;
    if (x[mid] > key)
      R = mid;
    else 
      L = mid;
  }
  if (L >= 0 && x[L] == key) 
    return L;
  else
    return -1;
}
int main()
{
  int a[9] = {-17, -5, 3, 6, 12, 21, 45, 63, 75};
  printf("key is found at %d\n", bin_search(a, 9, 63));
}
