#include<stdio.h>

   /* HOW TO  PRINT ROWS AND COLUMNS AT A TIME */

int main()
{
	int i, j;
	for (i=1;i <= 3; i++)
	{
		/* FOR STATEMENT AND WHILE STATEMENT BOTH ARE SAME BUT WHEN ONE STATEMENT MO USE OF BRACES */
		for (j=1;j <= 5;j++)
		{ 
			printf("* ");
		}
	        printf("\n");
		
	}
       return 0;
}

