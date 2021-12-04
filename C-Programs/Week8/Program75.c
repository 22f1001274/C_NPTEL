#include<stdio.h>

// COMPUTE GCD OF FOUR NUMBERS

int gcd(int a, int b)
{
  int g;
  int v;
  (a > b)? (v = b, b = a, a = v) : printf("yeah\n");
  while (b % a != 0)
  {  
    g = b % a;
    b = a;
    a = g;
  }
  return (a);
}

int main()
{
  int p, q, r, s, hcf;
  scanf("%d %d %d %d", &p, &q, &r, &s);
  
  hcf = gcd(gcd(p, q), gcd(r, s));
  printf("%d is the HCF of four numbers\n", hcf); 
  return 0;
}
 
  
 
  
  
