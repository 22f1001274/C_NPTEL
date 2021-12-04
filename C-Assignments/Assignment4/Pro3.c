#include<stdio.h>

    /* TO FIND FACTORIAL USING WHILE LOOP */

int main()
{
	int n, i, fact= 1;
	scanf("%d", &n);
	i=1;

	while (i <= n) {
		fact = fact * i;
		i++;
	}
	printf("Factorial of %d is %d\n", n, fact);
       return 0;
}       
