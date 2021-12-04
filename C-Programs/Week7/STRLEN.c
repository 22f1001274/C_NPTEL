#include<stdio.h>

// this is strlen function

int dupstrlen(char string[])
{
  int count = 0;
  int i = 0;
  while (string[i] != '\0')
  {
    count++;
    i++;
  }
  return (count);
}
void main()
{
  int length;
  char name[10];
  scanf("%[^\n]", name);
  length = dupstrlen(name);
  printf("length of string name is %d\n", length);
}
