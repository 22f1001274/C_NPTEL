#include<stdio.h>

  /* SAME AS PRAC1 */

int main()
{
	int fahr, celsius;
	int lower=0, upper=300, step=20;
       
	 for (fahr=0;fahr <= 300;fahr = fahr + 20) {      
	 celsius = 5 * (fahr - 32) / 9;
	 
	 printf("%d\t%d\n", celsius, fahr);
	 }
	
	return 0;
}


