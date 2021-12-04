#include<stdio.h>

    /* CAN NUMBER BE EXPRESSED AS POWER OF TWO */

int main()
{
	int i, n, p=0;
	scanf("%d", &n);
	int num = n;

	while (n % 2 == 0)
	{	
		i = n % 2;
	        p++;
		n = n / 2;
	}	
	if (n == 1)
		printf("%d is power of 2^%d\n", num , p);
	else 
		printf("%d Is not power of 2\n", num);
	return 0;
}

