#include<stdio.h>

    /* EXAMPLE OF A SWITCH STATEMENT */

int main()
{
	char letter;
	scanf("%c", &letter);
	
	switch (letter) 
	{
		case 'A':
	           printf(" First Letter \n");
		   break;
		case 'Z':
                   printf(" Last Letter \n");
                   break;
		default :
                   printf(" Middle Letter \n");
                   break;
	 return 0;
	}
}	

