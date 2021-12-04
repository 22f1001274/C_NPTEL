#include<stdio.h>

// stdin, stdout, stderr(prints errors to an error device)

void main()
{
  int i;
  
  fprintf(stdout, "Give value of i\n");
  fscanf(stdin, "%d", &i);
  fprintf(stdout, "Value of i = %d\n", i);
  fprintf(stderr,"NO error; but an example to show error message\n");
}

