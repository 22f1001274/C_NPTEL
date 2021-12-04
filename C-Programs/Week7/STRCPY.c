#include<stdio.h>

// this is strcpy function

void dupstrcpy(char string1[], char string2[])
{
  int i=0;
  while (string2[i] != '\0')
  {
    string1[i] = string2[i];
    i++;
  }
  printf("check are equal %s and %s\n", string1, string2);
}
void main()
{
  char name[30], list[30];
  scanf("%s", list);
  dupstrcpy(name, list);
}
