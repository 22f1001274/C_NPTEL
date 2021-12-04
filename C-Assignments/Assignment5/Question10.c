#include<stdio.h>

   /* VALUE OF I AFTER PROGRAM */

int main()
{	
	int i=1, j;

	for (j=0;j <= 10;j += i) 
        {
	     i = i + j;
          }

	printf("%d\n", i);
	return 0;
}
