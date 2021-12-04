#include<stdio.h>

// Type of Triangle 

void main()
{
  int numberOfSides, side1, side2, side3;
  scanf("%d", &numberOfSides);
  if (numberOfSides == 3)
  {
    scanf("%d %d %d", &side1, &side2, &side3);
    if ((side1 == side2) || (side2 == side3) || (side3 == side1))
      printf("\n This is an Isoceles Triangle \n");
    else 
      printf("\n This is not an Isoceles Triangle \n");
  }
  else 
    printf("\n This is not a Triangle\n");
}
