#include<stdio.h>

//Finding maximum marks by student

int maximum(int A[], int n)
{
  int i =0, max = A[i], maxindex;
  
  for (i=1;i < n;i++)
  {
    if (max < A[i])
    {  
       max = A[i];
       maxindex = i;
    }
  }
  return (maxindex);
}

int main()
{
  int Marks[5] = {32, 45, 72, 33, 70};
  char name[5][7] = {"adnan", "burhan", "afnan", "hanan", "shahida"};
  
  printf("Name of topper is = %s\n", name[maximum(Marks, 5)]);
}

 
