#include<stdio.h>

    /* FIND LARGEST ELEMENT OF AN INTEGER ARRAY. */

int main()
{
	int n, i;
	scanf("%d", &n);

	int array[n];
	for (i=0;i < n;i++)
	scanf("%d", &array[i]);

	int max = -9999999;
	
	for (i=0;i < n;i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	printf("Largest element =%d\n", max);
	return 0;
}

		
				
