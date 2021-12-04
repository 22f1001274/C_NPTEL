#include<stdio.h>

// alternative without using toupper function.

void main()
{
  char color;
  switch (color = getchar())
  {
    case 'r':
    case 'R': printf("Red\n"); break;
    case 'g':
    case 'G': printf("Green\n"); break;
    case 'b':
    case 'B': printf("Blue\n"); break;
    default : printf("Invalid Choice\n"); break;
  }
}
