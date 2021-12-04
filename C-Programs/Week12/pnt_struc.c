#include<stdio.h>

// POINTER IN STRUCTURE

int main()
{
  struct stud
  { 
    int roll;
    int dpt_code;
    float cgpa;
  } class[100], *ptr;
  ptr = class;
  int n, k=0;
  scanf("%d", &n);
  while (k<n)
  {  
    scanf("%d %d %f", ptr->roll, ptr->dpt_code, ptr->cgpa);
    ptr++;
    k++;
  }
  printf("%d %d %f", ptr->roll, ptr->dpt_code, ptr->cgpa);
} 
