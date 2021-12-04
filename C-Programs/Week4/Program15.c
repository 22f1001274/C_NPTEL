#include<stdio.h>

       /* SWITCH STATEMENT FOR CHOOSING COLOUR */

int main()
{        
	char choice;
        scanf("%c", &choice);                             
	/* TOUPPER MEANS ANY CHARACTER TO ITS UPPER */
	switch (choice = toupper(getchar()))   /* GETCHAR IS BUILT IN FUNCTION OR   AN OPERATION () IS FOR ASCI CODE ENTRY FROM THE USER */
	{
		case 'R':   printf("RED\n");
			    break;
		
		case 'G':   printf("GREEN\n");
			    break;
		
		case 'B':   printf("BLUE\n");
			    break;
		
		default:    printf("INVALID CHOICE\n");
			    break;
	}
           return 0;
}


			

