#include<stdio.h>
#include<math.h>

   /* COMPUTING INCOME TAX */

int main()
{
	float tax, income, net_income;
	printf("Please Enter Your Income\n");
	scanf("%f", &income);
        
	if (income <= 100000)
		printf("You are exempted from tax\n");
	else
		if (income <= 200000)
		{	
		    tax = 0.1 * income;  
		    net_income = income - tax;
		    printf("Your Net Income is %f\n", net_income); 
		}
		else 
		{
			tax = 0.2 * income;
			net_income = income - tax;
			printf("Your Net Income is %f\n", net_income);
		}
	return 0;
}


