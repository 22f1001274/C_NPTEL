#include<stdio.h>

   /* WHEN AN ARRAY IS ASSIGNED ONLY ONE VALUE BUT MORE THAN ONE LOCATION */

int main()
{
	int i;
	int arr[3] = {3};
	
	for (i=0;i < 3;i++)
		printf("%d ", arr[i]);
	return 0;
}
