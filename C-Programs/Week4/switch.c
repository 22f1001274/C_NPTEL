#include<stdio.h>

// Example of a Switch Statement

void main()
{
  char letter;
  scanf("%c", &letter);
  
  switch (letter)
  {
    case 'A': 
       printf("First Letter\n");
       break;
    case 'Z': 
       printf("Last Letter\n");
       break;
    default :
       printf("Middle Letter\n");
       break;
   }
}       
