#include<stdio.h>

        /* TO FIND GCD OF TWO INTEGERS */

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int gcd(int a, int b);

	printf("%d is the gcd\n", gcd(a, b));
	return (0);
}
int gcd(int x, int y)
// or here int x, int y;
{
	int g;
	while ((y % x) != 0) {
		g = y % x;
		y = x;
		x = g;
	}
	return (x);
}

