#include<stdio.h>
// no of subject
#define nsub 6

// computing grade point average

void main()
{
  int gradePt[nsub], cred[nsub], gpSum = 0, credSum = 0;
  float gpa;
  for (int i=0;i<nsub;i++)
  {
    printf("Enter the grade and credit of that subject resp: ");
    scanf("%d %d", &gradePt[i], &cred[i]);
  }
  for (int i=0;i<nsub;i++)
  {  
    gpSum += gradePt[i] * cred[i];
    credSum += cred[i];
  }
  gpa = gpSum / credSum;
  printf("\n Grade Point Average: %f\n", gpa);
}
