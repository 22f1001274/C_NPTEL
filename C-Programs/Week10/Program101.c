#include<stdio.h>
#include<string.h>

// THIS PROGRAM ASKS THE USER TO ENTER A USERNAME. IF A USERAME ENTERED IS ONE OF THE NAMES IN THE MASTER LIST THEN THE USER IS ALLOWED TO CALCULATE THE FACTORIAL OF A NUMBER. OTHERWISE, AN ERROR MESSAGE IS DISPLAYED.

int factorial(int n);
int main()
{
  int i, found = 0, n;
  char master_list[5][20] = {"Burhan", "Danish", "Admin", "NASA"};
  char name[10];
  printf("Enter username:");
  gets(name);
  for (i=0;i<5;i++)
  { 
    if(strcmp(name, master_list[i]) == 0)
    {
      found = 1;
      break;
    }
  }
  if (found == 1)
  {
    printf("\nWelcome %s!\n", name);
    printf("\nEnter a number to calculate the factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, factorial(n));
  }
  else 
  {
    printf("Error: You are not allowed to run this program.");
  }
  return 0;
}
int factorial(int n)
{
  if (n==0) 
    return 1;
  else
  return (n*factorial(n-1)); //recursion
}
