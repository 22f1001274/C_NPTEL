#include<stdio.h>
#include<math.h>

    /* DECIMAL TO BINARY CONVERSION */

int main()
{
	int num, remainder=0, decimal_num, base=1, binary=0;
	printf("Please enter a number\n");
	scanf("%d", &num);
	decimal_num=num;

        while (num > 0) {
	      	remainder=num % 2;
	binary= binary + remainder * base;
	num=num / 2;
	base = base * 10;
	}
	printf("Input number is %d\n", decimal_num);
	printf("%d is its Binary equivalent\n", binary);
	return 0;
}

