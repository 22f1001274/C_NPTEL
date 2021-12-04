#include<stdio.h>

   /* NESTED LOOPS AND USING WHILE STATEMENT */

int main()
{
	const int ROWS = 3;
	const int COLS = 5;
        int col=1 ,row = 1;
	
	while (row <= 3)  /* OUTER LOOP */
	{
		/* WHILE DOES EACH STEP IN A LOOP EVERY TIME */ 
	
		while (col <= COLS) 
		{  
			printf("* ");   /* INNER LOOP */
			col++;
		}
		     printf("\n"); 
                        row++;
	}
return 0;
}

			
		
