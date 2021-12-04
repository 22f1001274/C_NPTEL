#include<stdio.h>

// read the strings character with spaces

void main()
{
  char name[30], ch;
  int i = 0;
  printf("Enter the name\n");
  do 
  {
    ch = getchar();
    name[i] = ch;
    i++;
  } while (ch != '\n');
  
  i -= 1;
  name[i] = '\0';
  printf("%s is the string\n", name);
}
