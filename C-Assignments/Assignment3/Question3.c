#include<stdio.h>

    /* PROGRAM WITH OPERTER AND END RESULT */

int main()
{
	int a=10, b=3, c=2, d=4, result;
	
	result = a + a * -b / c % d + c * d;
	printf("%d\n", result);

	return 0;
}

