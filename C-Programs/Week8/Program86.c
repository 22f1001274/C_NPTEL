#include<stdio.h>

// WHOLE ARRAY AS PARAMETERS

const int ASIZE = 5;
float average(int B[])
{
  int i, total = 0;
  for (i = 0; i < ASIZE;i++)
    total = total + B[i];
  return ((float)total / (float)ASIZE);
}

int main()
{
  int x[ASIZE];float x_avg;
  x = {10, 20, 30, 40, 50};
  x_avg = average(x);
  printf("%f", x_avg);
  
}

