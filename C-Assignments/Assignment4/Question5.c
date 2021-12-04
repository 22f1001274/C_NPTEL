#include<stdio.h>

   /* WHILE STATEMENT */

int main()
{
	int n, x = 0, y;
	printf("Enter an integer:\n");
	scanf("%d", &n);

	while (n != 0) {
		y = n % 10;
                x = x - y;
		n = n / 10;
	}
	printf("Output is = %d\n", x);
	return 0;
}
