#include<stdio.h>

  /* SUM OF TEN NUMBERS SUM=10*(11)/2 */

int main()
{
	int sum, myindex;
	sum = 0;
	for (myindex=0;myindex < 10;myindex++)
       {
		sum = sum + myindex + 1;
       }
         printf ("%d", sum);
	 return 0;
}

