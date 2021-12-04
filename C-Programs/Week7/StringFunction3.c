#include<stdio.h>
#include<string.h>

// 3) strcat: used for adding strings. strcat(s1, s2);
   
void main()
{
  char name1[10], name2[10];
  strcpy(name1, "Amit");
  strcpy(name2, " Roy");
  
  strcat(name1, name2);
  printf("%s is the name after appending\n", name1);
}
