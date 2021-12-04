#include<stdio.h>
#include<ctype.h>

// we included ctype library to use toupper function.
// switch statement for choosing color 

void main()
{
  char color;
  // toupper means any character to its upper case.
  // get char is built in function or an operation () used for asci code entry form the user.
  switch (color = toupper(getchar()))
  {
    case 'R': printf("Red\n"); break;
    case 'G': printf("Green\n"); break;
    case 'B': printf("Blue\n"); break;
    default : printf("Invalid Choice\n"); break;
  }
}
