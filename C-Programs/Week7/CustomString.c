#include<stdio.h>

// takes chars that you want it to take

void main()
{
  char line[30];
  // here if we use enter it will take it also as string and print it.
  // we can also use %[^\n] 
  scanf("%[ ABCDEFGHIJKLMNOPQRSTUWXYZ\n]", line);
  printf("%s is the string\n", line);
}
