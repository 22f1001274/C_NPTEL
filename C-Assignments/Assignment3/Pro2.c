#include<stdio.h>

  /* CHECK IFi A GIVEN NUMBER IS ZERO POSITIVE OR NEGATIVE USING IF ELSE */

int main()
{
	float x;
	scanf("%f", &x);

	if (x < 0)
		printf("Negative number\n");
	else      
		if (x >0)
		      printf("Positive number\n");
		else 
		      printf("Number is Zero\n");
	
	return 0;
}
