#include<stdio.h>

   /* WEIGHT LOSS PROGRAM */

int main()
{
	int weight;
	while (weight > 65)
	{
		printf("Go, Exercise,\n");
		printf("Then, Come back.\n");
		printf("Enter Your Weight:\n");
		scanf("%d", &weight);
	}
	printf("Congratulations you have achieved your dream.\n");
	return 0;
}

