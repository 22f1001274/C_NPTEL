#include<stdio.h>

// passing grades for exam using ? :

void main()
{
  int grade;
  scanf ("%d", &grade);
  (grade >= 60)? printf("\n Passed \n") : printf("\n Failed \n");
} 
