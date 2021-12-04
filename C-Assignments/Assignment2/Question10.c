#include<stdio.h>
#define fun(x) (x * x - x)

    /* PROGRAM IS WITH USING FUNCTION */

int main()
{
	float i;
	i = 37.0 / fun(2);
	printf("%.2f\n", i);
	return 0;
}
