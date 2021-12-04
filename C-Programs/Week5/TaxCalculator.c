#include<stdio.h>

// Computing income tax.

void main()
{
  float tax, income, netIncome;
  printf("Please Enter Your Income\n");
  scanf("%f", &income);
  
  if (income <= 100000)
    printf("You are exempted from tax\n");
  else if (income <= 200000)
    {
      tax = 0.1 * income;
      netIncome = income - tax;
      printf("You have to %f tax and you net income remains %f\n", tax
              , netIncome);
    }
  else
    { 
      tax = 0.2 * income;
      netIncome = income - tax;
      printf("You have to %f tax and you net income remains %f\n", tax
              , netIncome);
    }
}
