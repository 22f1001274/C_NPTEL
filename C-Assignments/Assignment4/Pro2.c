#include<stdio.h>

    /* CHECK WHETHER THE TRIANGLE IS FORMED AND ITS TYPE */

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if ((a<(b+c)) && (b<(a+c)) && (c<(b+a)))
	{
		if ((a == b) && (b == c))
		printf(" Equilateral Traingle\n");
		else 
			if ((a == b) || (b == c) || (c == a))
				printf(" Isosceles Triangle \n");
			else 
				if ((a*a == b*b + c*c) || (b*b == c*c + a*a) || (c*c == a*a + b*b))
		printf("Right angled Triangle \n");
				else 
					if ((a != b) && (b != c) && (c != a))
						printf("Scalene Triangle\n");
						}
	else 
		printf("Triangle is not possible\n");
        return 0;
} 

		

	
