#include<stdio.h>
#define PI 3.14285714

  /* Computing area of a circle using sub functions */

int main()
{
	float radius, area;
	float myfunc(float radius);

	scanf ("%f", &radius);
	
	area = myfunc(radius);

	printf("\n Area is %f \n", area);
	return 0;
}
float myfunc(float r)
{
	float a;
	a = PI*r*r;
	return (a); /* return result */
}
