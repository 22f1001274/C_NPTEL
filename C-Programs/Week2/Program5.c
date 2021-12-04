#include<stdio.h>
#define PI 3.1415926
   
    /* Compute the area of a circle using only main function */
 
int main()
{
	float r, area;
        scanf ("%f", &r);
	area = PI * r * r;
		printf("\n Area is %f \n", area);
	return 0;
}
