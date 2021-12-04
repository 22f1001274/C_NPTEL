#include<stdio.h>

   /* PROGRAM */

int main()
{
	int x, y;
	scanf("%d", &x);
	x = y;
	y = x * 10 + y % 2;

	printf("%d is the value of y\n", y);
	return 0;
}
