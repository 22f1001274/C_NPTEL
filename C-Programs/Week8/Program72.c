#include<stdio.h>

     /* TO FIND AVERAGE USING FUNCTION */

float avg(int x, int y)
{
	float avg;
	avg = (x + y) / 2.0;
	return (avg);
}
int main()
{
	int a=3, b=2;
	printf("%f is the average\n", avg(a, b));
	return (0);
}

	
