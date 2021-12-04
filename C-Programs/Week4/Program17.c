#include<stdio.h>

   /* ALTERNATIVE OF THAT I COULD'NT DO */

int main()
{
	char choice;
	scanf("%c", &choice);
	switch (choice = getchar())
	{
		case 'r':
		case 'R': printf("Red\n");
			  break;
		case 'g':
		case 'G': printf("Green\n");
			  break;
		case 'b':
		case 'B': printf("Blue\n");
			  break;
		default: 
			  printf("Invalid choice\n");
	                  break;  
	}
	return 0;
}
