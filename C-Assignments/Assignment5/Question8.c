#include<stdio.h>

   /* BOTH TRUE AND FALSE */

int main()
{
	int a=1;

	if (a--)
		printf("TRUE\n");
	if (++a)
		printf("FALSE\n");
	return 0;
}
