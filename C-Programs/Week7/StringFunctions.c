#include<stdio.h>
#include<string.h>

// Use String library : 
/*                1) strcpy : copying string in another char.
                              strcpy (s1, "burhan");
                              or strcpy(s1, s2);  */

void main()
{
  char string1[10], string2[10];
  strcpy (string1, "burhan");
  strcpy (string2, string1);
  
  printf("%s & %s are string 1 and string 2 resp\n", string1, string2);
}
                       
