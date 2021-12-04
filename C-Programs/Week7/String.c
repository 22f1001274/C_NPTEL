#include<stdio.h>

// read the strings of words.

void main()
{
  char name[30];
  printf("Enter the strings of characters\n");
  scanf("%s", name);
  // will not print names with surname as assign /0 after spacing.
  printf("%s is the string of character\n", name);
}  
