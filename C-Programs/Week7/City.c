#include<stdio.h>
#include<string.h>

// Example using both strlen and strcpy.

void main()
{
  char city[15];
  int noOfLetters;
  strcpy(city, "Calcutta");
  noOfLetters = strlen(city);
  printf("%s is the string and %d is the number of words\n", city
          , noOfLetters);
}
  
