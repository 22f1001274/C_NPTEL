#include<stdio.h>

  /* BREAK AND CONTINUE WITH NESTED LOOPS */

int main()
{
	int low, high, desired, i, j, flag=0;
	scanf("%d %d %d", &low, &high, &desired);
	i = low;
	while (i < high) {
		for (j=i + 1;j <= high;++j) {
			if(j % i == desired) {
				flag=1;
				break;
			}
		}
		if(flag == 1) break;
		i=i+1;
	}
	return 0;
}
