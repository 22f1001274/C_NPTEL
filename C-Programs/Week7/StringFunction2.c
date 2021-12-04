#include<stdio.h>
#include<string.h>

// strlen: returns integer length of string. str(s1);

void main()
{
  int length = 0;
  char string[10];
  scanf("%[^\n]", string);
  length = strlen(string);
  printf("length of string is %d\n", length);
}
