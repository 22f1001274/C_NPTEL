#include<stdio.h>

   /* SUM OF THE FIRST AND LAST DIGIT OF A GIVEN NUMBER */

int main()
{
	int n, Last_digit, First_digit;
	scanf("%d", &n);
	
	Last_digit = n % 10;
	
	while (n >= 10) {
		n = n / 10;
	}
	First_digit = n;

	printf("Sum of First and Last digit = %d\n", First_digit + Last_digit);
	
	return 0;
}


