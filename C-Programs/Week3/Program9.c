#include<stdio.h>

     /* TYPE CASTING TWICE FLOATING POINT SPACE */

int main()
{
	double perimeter;
	float pi = 3.14;
	int r = 3;

	perimeter = 2.0*(double)pi*(double)r;
	printf("%f is the Perimeter", perimeter);
	return 0;
}

