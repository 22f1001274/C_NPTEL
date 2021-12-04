#include<stdio.h>

     /* PYRAMID PATTERN UPTO NTH ROW */

int main()
{
	int n;
	int i, row, col;
	scanf("%d", &n);

	for (row=n;row > 0;row--)
	{
		for (col=0;col < row;col++)
		{	
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


