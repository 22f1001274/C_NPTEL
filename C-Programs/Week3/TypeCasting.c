#include<stdio.h>

// Type casting is used for storing one type of data in another.
// here int is casted in float.

void main()
{
  float castedDiv, div;
  int num1 = 3, num2 = 2;
  // now here we cast so that we get 1.5 otherwise we would get 1  
  castedDiv = (float) num1 / num2;
  div = num1 / num2;
  printf("%f is the value after division of %d by %d without type casting \n", div,num1, num2);
  printf("%f is the value after division of %d by %d with type casting \n", castedDiv, num1, num2);
}
 
