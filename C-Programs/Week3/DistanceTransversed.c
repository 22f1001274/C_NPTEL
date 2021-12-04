#include<stdio.h>

// Find distance transversed by any object.

void main()
{
  float speed, distance, time;
  scanf("%f %f", &speed, &time);
  distance = speed * time;
  printf("\nThe distance transversed is %f\n", distance);
}
