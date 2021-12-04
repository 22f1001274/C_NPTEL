#include<stdio.h>

    /* TO CHECK WEATHER THE GIVEN NUMBER IS ODD OR EVEN */

int main()
{
	int num;
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("%d is even\n", num);
	else 
		printf("%d is odd\n", num);

	return 0;
}
