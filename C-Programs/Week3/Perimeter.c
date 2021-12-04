#include<stdio.h>

// Type casting twice floating point space.

void main()
{
  double perimeter, castedPerimeter;
  float pi= 3.14;
  int side = 3;
  
  castedPerimeter = 2.0 * (double)pi * (double)side;
  perimeter = 2 * pi * side;
  
  printf("%f is the casted perimeter and %f is non casted\n", castedPerimeter, perimeter);
}
