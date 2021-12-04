#include<stdio.h>

   /* ANOTHER 2D PROGRAM IN WHILE STATEMENT */

int main()
{
	int row = 1, col = 1  ;
        while (row <= 5)
	{ 
		while (col <= row)
	      {	
	       printf("* ");	
	       col++; 
	      }
               printf("\n");
	       col = col - 1 * row;
	       row++;
	}
return 0; 
}
