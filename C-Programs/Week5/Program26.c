#include<stdio.h>

    /* HOW TO USE BREAK STATEMENT IN LOOPS, NOT FOR IF ELSE */

int main()
{
	int fact, i, n;
        scanf("%d", &n);
	fact=1; i=1;
	while (i < n)
	{
		fact = fact * i;   /* run a loop break when fact>100 */
	        
	            if (fact > 100) {

                        printf("Factorial of %d above 100\n", i);
                        break;       /* break out of the while loop */
                }
                i++;
	}	
	return 0;
	
}

