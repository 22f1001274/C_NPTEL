#include<stdio.h>
#define PI 3.14285714

// Computing area of circle using sub functions.

float calculateArea(float r)
{
  // return this value
  return (PI * r *r);
}
void main()
{
  float area, radius;
  scanf("%f", &radius);
  
  area = calculateArea(radius);
  
  printf("\n Area of radius %f is %f\n", radius, area);
}

