#include<stdio.h>

   /* TO CHECK X IS ODD OR EVEN */

int main()
{
	int x;
	scanf("%d", &x);

	if (x%2 == 0) {
		printf("x is even \n");
	}
	else {
		printf("x is odd \n");
	}
	return 0;
}

