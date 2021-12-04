#include<stdio.h>

   /* COUNT TOATAL NUMBER OF DIGITS */

int main()
{
	int n, count=0;
	scanf("%d", &n);
	int i=1;

	while (i < n)
	{	
		n = n / 10;
	        count++;
	}
	printf("Total no of digits are %d\n", count);
	return 0;
}


