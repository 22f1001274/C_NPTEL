#include<stdio.h>

     /* TO FIND SMALLEST OF THREE NUMBERS USING NESTED IF ELSE */

int main()
{
	int x, y, z;
	scanf ("%d %d %d", &x, &y, &z);

        if (x < y)
	{
		if (x < z)
			printf("%d is the smallest number\n", x);
		else 
			printf("%d is the smallest number\n", z);
	}
	else 
	{	
		if (y < z)
		       printf("%d is the smallest number\n", y);
		else
		printf("%d is the smallest number \n", z);
	}
return 0;
}

	    	
	

