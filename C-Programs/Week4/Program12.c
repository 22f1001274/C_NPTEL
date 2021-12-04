#include<stdio.h>

   /* TYPE OF TRIANGLE */

int main()
{
	int number_of_sides, a, b, c;
	scanf("%d", &number_of_sides);
	if (number_of_sides == 3)
	{ 
            scanf("%d %d %d", &a, &b, &c);
	      if ((a==b) || (b==c) || (c==a))
	              printf("\n This is an Isoceles Triangle \n");
	      else
	              printf("\n This is not a Isoceles Triangle \n");
	}
	else 
		printf("\n This is not a Triangle\n");
	return 0;	
}
