#include<stdio.h>

    /* VALUE OF A , B AND C AFTER THE EXECUTION OF PROGRAM */

int main()
{
	int a=5, b=7, c=111;

	c /= ++a * b--;
	
	printf("%d %d %d\n", a, b, c);
	return 0;
}

