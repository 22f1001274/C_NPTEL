#include<stdio.h>
#include<math.h>

// finding mean and standard deviation.

void main()
{
  int inputs[5], sum = 0, i;
  float mean, stDeviation;
  printf("Enter five integers\n");
  
  for (i=0;i<5;i++)
    scanf("%d", &inputs[i]);
  for (i=0;i<5;i++)
    sum += inputs[i];
  mean = sum / 5;
  printf("Mean = %f, Total sum = %d\n", mean, sum);
  
  double devSum = 0;
  for (i=0;i<5;i++)
    devSum += pow((mean - inputs[i]), 2);
  stDeviation = sqrtf(devSum / 5);
  printf("sum of deviations is %lf\n", devSum);
  printf("%f is the Standard Devaition\n", stDeviation);
}
   
