#include<stdio.h>

// VARIABLE SCOPE 

int A; // Global variable
void myProc();
void main()
{
  A = 1;
  myProc();
  printf("A = %d\n", A);
}
void myProc()
{  
  int A = 2;
  while (A == 2)
  {    
    int A = 3;
    printf("A = %d\n", A);
    break;
  }
  printf("A = %d\n", A);
}
