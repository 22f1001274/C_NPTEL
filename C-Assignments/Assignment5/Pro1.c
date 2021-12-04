#include<stdio.h>

    /* TO CHECK INPUT NUMBER IS PERFECT NUMBER OR NOT */

int main()
{
	int n;
	scanf("%d", &n);

	int i, sum = 0;
	    for (i=1;i < n;i++)
	    {
		    if (n % i == 0)
			    sum = sum + i;
	    }
	    if (sum == n)
		    printf("%d is a perfect number\n", n);
	    else 
		    printf("%d is not a perfect number\n", n);
	    return 0;
}
