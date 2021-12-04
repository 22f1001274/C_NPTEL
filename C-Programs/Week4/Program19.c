#include<stdio.h>

  /* COMPUTE SUM OF FIVE NUMBERS */

int main()
{
	int sum, n, count, num;
	sum=0;
	count=0;
	n=5;

	while (count < n)
	{
		printf("Please enter a number\n");
		scanf("%d", &num);
		sum = sum + num;
		printf("%d is the Sum\n", sum);
		count++;
	}
       printf("%d is the Total Sum\n", sum);
	return 0;
}

