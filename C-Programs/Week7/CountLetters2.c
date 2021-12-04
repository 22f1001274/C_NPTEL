#include<stdio.h>
#include<string.h>
#include<ctype.h>

// calculating total no of uppercase and lowercase letters in a line.

void main()
{
  int length, upper = 0, lower = 0, i;
  char line[100];
  printf("Enter a sentence\n");
  scanf("%[^\n]", line);
  length = strlen(line);
  
  for (i=0;i<length;i++)
  {
    if (isupper(line[i]))
      upper++;
    else if (islower(line[i]))
      lower++;
  }
  printf("No of lowercase letters and uppercase letters are %d and %d resp\n", lower, upper);
}
