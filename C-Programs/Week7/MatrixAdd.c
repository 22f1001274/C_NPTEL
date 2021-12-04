include<stdio.h>

    /* MATRIX ADDITION */

int main()
{
	int a[5][5], b[5][5], c[5][5], r, co, i, j;
	printf("no of rows and cols resp\n");
	scanf("%d %d", &r, &co);

	for (i=0;i < r;i++)
	{
		for (j=0;j < co;j++)
		{
			scanf("%d %d", &a[i][j], &b[i][j]);
		}
	}
	
	for (i=0;i < r;i++)
	{
		for (j=0;j < co;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for (i=0;i < r;i++)
	{
		printf("\n");
		for (j=0;j < co;j++)
		{
			printf("%d ", c[i][j]);
		}
	}
	return 0;
}



