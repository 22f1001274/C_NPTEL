#include<stdio.h>

   /* FOR CHECKING WEATHER ARRAYS ARE EQUAL */

int main()
{
	int a[4], b[4], i; 
	    int flag = 0;
	
	for (i=0;i < 4;i++) {
		printf("Enter the integers of a and b\n");
		scanf("%d %d", &a[i], &b[i]);
	}

	for (i=0;i < 4;i++) {
		if (a[i] == b[i]) { 		
		      flag = 1;
		}
		else {
			flag = 0;
	                break;
		}
	}	
	printf("Value of flag is %d\n", flag);
	
	return 0;
}
