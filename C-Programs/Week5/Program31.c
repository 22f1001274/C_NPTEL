#include<stdio.h>

   /* TO FIND SUM OF DIGITS OF A NUMBER */

int main()
{
	int n, num, sum=0;
	scanf("%d", &n);
	num = n;
	while (n != 0) {
		sum = sum + (n % 10);
		n = n/10;
	}
	printf("The sum of digits of the number %d is %d\n", num, sum);
return 0;
}
