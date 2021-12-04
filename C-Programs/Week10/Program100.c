#include<stdio.h>

// ARRAYS AT STRINGS. TWO WAYS FOR ASSIGNING STRING IN CHAR ARRAY

int main()
{
  int i=0;
  char ch_arr[3][10] = {"spike", "tom", "jerry"};
  // or ch[3][10] = {{'s', 'p', 'i', 'k', 'e', '\0'}, {}};
  printf("1st way\n\n");
  for (i=0;i<3;i++)
    {
      printf("string = %s \t address = %u\n", ch_arr + i, ch_arr + i);
    }
  return 0; //signal to os program ran fine
}
   
