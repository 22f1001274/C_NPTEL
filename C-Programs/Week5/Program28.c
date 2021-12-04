#include<stdio.h>
#include<math.h>
    
        /* TO FIND ROOTS OF A QUADRATIC EQUATIONS */

int main(){
	int a, b, c;
	float disc, d;
	float root1, root2;

        printf("Enter integer Coff a b c\n");
	scanf("%d %d %d", &a, &b, &c);
	disc = b * b - 4 * a * c;

	if (disc > 0)
	{
		printf("Roots are real\n");
	d = sqrtf(disc);
	root1 = (-b + d)/(2 * a);
	root2 = (-b - d)/(2 * a);
	printf("Roots are %f and %f\n", root1, root2);
	}
	else 
		if (disc == 0)
		{
			printf("Roots are equal\n");
                 root1 = (-b)/(2 * a);
		 printf("Root is %f\n", root1);
		}	
	
		else 
		{
			d = sqrtf(disc);
			printf("Complex roots containing both imag and real\n");
    	                printf("Real part %d\n", (-b)/(2 * a));
			printf("Imaginary part +i%f and -i%f\n", (d)/(2 * a), (d)/(2 * a));
				}
				return 0;
				}
						

	
