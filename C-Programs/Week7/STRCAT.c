#include<stdio.h>
#include<string.h>

// strcat function

void dupstrcat(char name1[], char name2[])
{
  int i = 0, j = 0;
  char name[20];
  while (name1[i] != '\0')
  {
    name[i] = name1[i];
    i++;
  }
  printf("name is %s\n", name);
  i++;
  while (name2[j] != '\0')
  {
    name[i] = name2[j];
    j++;
    i++;
  }
  int k = 0;
  while (name[k] = '\0')
  {
    printf("%c ", name[k]);
    k++;
  }

}
void main()
{
  char nam1[10], nam2[10]; 
  strcpy(nam1, "Amit");
  strcpy(nam2, " Roy");
  
  dupstrcat(nam1, nam2);
}  
