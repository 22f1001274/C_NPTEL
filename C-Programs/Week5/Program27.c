#include<stdio.h>

  /* PROGRAM FOR BREAK AND CONTINUE */

int main()
{ 
	int fact, i;
	fact=1; i=1;
        while (1){	
	  fact = fact * i;
	  i++;
	  if (i < 10) 
		  continue;
	  break;
	}
	printf("factorial has become more than ten on %d \n", i);
	return 0;
}
