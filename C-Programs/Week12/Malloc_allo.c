#include<stdio.h>
#include<stdlib.h>

//USING MALLOC TO ASSIGN MEMORY SIZE.

int main()
{
  int i, N;
  float *height;
  float sum = 0, avg;
  
  printf("Input the number of students\n");
  scanf("%d", &N);
   
  height = (float *) malloc(N * sizeof(float));
  printf("Input heights for %d students\n", N);
  for (i=0;i<N;i++)
    scanf("%f", &height[i]);
  for (i=0;i<N;i++)
    sum += height[i];
  avg = sum / (float) N;
  printf("Average height = %f\n", avg);
  return 0;
}

