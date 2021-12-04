#include<stdio.h>
#include<string.h>
#include<ctype.h>

// count a number of uppercase letters in a line of text.

void main()
{
  char line[81];
  int i, length, count = 0;
  
  printf("Enter a line\n");
  scanf("%[^\n]", line);
  length = strlen(line);
  for (i=0;i<length;i++)
    if (isupper(line[i]))
      count++;
  printf("\nThe number of uppercase letters in this line of string:\n");
  printf("%s is %d\n", line, count);
}
  
