#include<stdio.h>

    /* FIND SUM OF SQUARE OF N NUMBERS */

int main()
{
	int sum=0, n, i;
	scanf("%d", &n);

	for (i=1;i <= n;i++)
	{
		sum = sum + i * i;
	}
	printf("%d", sum);
	return 0;
}

