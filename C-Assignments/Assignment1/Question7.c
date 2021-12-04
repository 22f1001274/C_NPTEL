#include<stdio.h>

   /* SET OF PROGRAM */

int main()
{
	int n, i=1, x=1;
	scanf("%d", &n);

	while (i >= n) {
		i++;
	        x = x * i;
	}
	
	printf("%d is value of x\n", x);
	
	return 0;
}
