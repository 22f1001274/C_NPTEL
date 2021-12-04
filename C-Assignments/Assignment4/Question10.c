#include<stdio.h>

     /* USE OF SWITCH STATEMENT BECAUSE BREAK STATEMENT IS NOT USED*/

int main()
{
	int x=1;

	switch(x)
	{
		case 1: printf("Choice is 1\n");
		default: printf("Choice is other than 1\n");
	}
	return 0;
}
