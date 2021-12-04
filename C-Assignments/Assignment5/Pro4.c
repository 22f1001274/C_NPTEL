#include<stdio.h>

    /* SUM OF VALUE OF SERIES OF N */

int main()
{
	int n, i;
	float sum = 0.0;
	scanf("%d", &n);

	for (i=1;i <= n;i++)
	{
		 sum = sum + ((float)1 / (float)i);
                 printf("Sum of the series is: %.2f\n",sum);
	}
		 return 0;
}
