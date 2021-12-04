#include<stdio.h>

   /* FIND LARGEST NUMBER INTEGER AMONG THREE NUMBERS USING IF AND LOGICAL && OPERTOR */

int main ()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	if ((x > y) && (x > z))
		printf("%d is the largest number\n", x);
	
	    if ((y > x) && (y > z))
                     printf("%d is the largest number\n", y);
                 
	       if ((z > x) && (z > y))
		      printf("%d is the largest number\n", z);

	      return 0;
}

