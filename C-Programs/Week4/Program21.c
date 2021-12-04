#include<stdio.h>

  /* COMPUTING FACTORIAL OF TEN */

int main()
{
	int fact, i;
	fact = 1;

	for (i = 1;i <=10;i++)
		fact = fact * i;
	printf("%d is the factorial\n", fact);

	return 0;
}

