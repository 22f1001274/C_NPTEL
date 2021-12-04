#include<stdio.h>

// SORTING BY ROLL NUMBERS 

struct stud 
{
  int roll;
  int dept_code;
  float cgpa;
};
void main()
{
  struct stud class[100], t;
  int j, k, n;
  printf("Enter number of students\n");
  scanf("%d", &n);
  for (k=0;k<n;k++)
  {    
    printf("Enter roll, dept code and cgpa of student no %d\n", k);   
    scanf("%d %d %f", &class[k].roll, &class[k].dept_code, &class[k].cgpa);
  }
  for (j=0;j < n-1;j++)
    for(k=j+1;k < n;k++)
    {  
      if (class[j].roll > class[k].roll)
      {
        t = class[j];
        class[j] = class[k];
        class[k] = t;
      } 
    }
} 
