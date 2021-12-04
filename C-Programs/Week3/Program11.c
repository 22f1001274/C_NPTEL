#include<stdio.h>

 /* BRANCHING IF ELSE STATEMENT */

int main()
{
	int x;
	scanf("%d", &x);
	if (x>5)
	    {
	     x = ++x;     /* if a block contains single statement, the braces can be deleted */
             printf("\n New value of x is %d \n", x);
	    }
	else 
	    {
	     printf("\n x is less than 5 \n");
            }
        return 0;
}
