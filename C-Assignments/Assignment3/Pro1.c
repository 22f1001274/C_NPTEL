#include<stdio.h>
#define PI 3.14

      /* AREA OF A CIRCLE WITH FLOATING POINT NUMBER UPTO TWO DECIMAL PLACES */

int main()
{
	int radius;
	float area;
	scanf("%d", &radius);

        area = PI * radius * radius;
        printf("Area of a circle = %.2f\n", area);
return 0;
}
