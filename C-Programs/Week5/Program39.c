#include<stdio.h>

   /* YET ANOTHER ONE USING WHILE LOOP */

int main()
{
	int const ROWS=5;
        int row = 0, col = 0;
	while (row < ROWS)
	{	
                while (col <= ROWS - row)
		{	
			printf("* ");
		col++;
		}
	        
		col = col - 5;
		row++;

	printf("\n");
	}
	return 0;		
}	
