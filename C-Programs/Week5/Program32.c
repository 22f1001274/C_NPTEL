#include<stdio.h>

    /* TO COMPUTE HCF OR GCD OF TWO NUMBERS */

int main()
{
	int A, B, rema;
	scanf("%d %d", &A, &B);
        
	if (B > A) { rema = B; B = A;A = rema;}
	while (A % B != 0) {
		rema = A % B;
		A = B;
		B = rema;
	}
	printf("%d is the HCF\n", B);
	return 0;
}



