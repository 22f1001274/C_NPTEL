#include<stdio.h>

  /* FIND THE LARGEST OF THREE NUMBERS */

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a>=b) && (a>=c))    /* Composite condition check */
		printf("\n Largest number is %d \n", a);
	else
		if ((b>=a) && (b>=c))
			printf("\n Largest number is %d \n", b);
	        else
			printf("\n Largest number is %d \n", c);
}


