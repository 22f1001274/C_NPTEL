#include<stdio.h>

      /* CONFUSING STATEMENTS IN IF ELSE STATEMENT */

int main()
{
	int x=1;
	
	if (x == 0)
		if (x >= 0)
			printf("x = 0\n");
		else 
			printf("x = 1\n");
	else 
		printf(" no print statement\n");
	return 0;
}
