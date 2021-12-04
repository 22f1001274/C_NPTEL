#include<stdio.h>

     /* INFINITE FOR WITH IF CONDITION */

int main()
{
	int i=0;
	
	for (;;)
	{
		if (i == 10)
			break;
		printf("%d \n", ++i);
	}
	return 0;
}

