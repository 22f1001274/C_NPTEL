#include<stdio.h>

   /* PROGRAM */

int main()
{
	int x, y=0;
	scanf("%d", &x);
	do 
	{  
		y = (y * 10) + (x % 10);
                        x = x / 10;
	} while (x != 0);
	if (x == 0)

	printf("value of y is %d\n", y);
	
	return 0;
}



