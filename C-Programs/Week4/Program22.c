#include<stdio.h>

    /* TO COMPUTE SUM OF N NUMBERS */

int main()
{
	int sum, i, n, num;
	sum=0;
	n=5;

        for (i=1;i <= n;i++)
	{ 
		printf("Please enter an integer\n");
	        scanf("%d", &num);
		sum = sum + num;
	}
	printf("%d is the Sum\n", sum);
        return 0;

}
