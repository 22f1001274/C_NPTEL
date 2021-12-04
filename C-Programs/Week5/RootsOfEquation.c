#include<stdio.h>
#include<math.h>
 
// To Find Roots of a Quadratic Equations.

void main()
{
  // coefficients of the quadratic equation
  int coefOfSquare, coef, cons;
  // discriminant and its square root.
  float disc, rootOfDisc;
  // solution of equation.
  float root1, root2;
  
  printf("Enter Integer Coefficient of x^2, x and constant resp.\n");
  scanf("%d %d %d", &coefOfSquare, &coef, &cons);
  // using shorter variable 
  int a = coefOfSquare, b = coef, c = cons;
  disc = b * b - 4 * a * c;
  
  printf("Roots of (%d)x^2 + (%d)x + (%d) is\n", coefOfSquare, coef, cons);

  // if discriminant greater than 0 means roots are real.
  if (disc > 0)
  {
    printf("Roots are real\n");
    rootOfDisc = sqrtf(disc);
    root1 = (-b + rootOfDisc) / (2 * a);
    root2 = (-b - rootOfDisc) / (2 * a);

    printf("%f and %f\n", root1, root2);
  }
  // if discriminant is equal to 0 means roots are equal.
  else if (disc == 0)
    {
      printf("Root are equal\n");
      root1 = (-b) / (2 * a);
      printf("Root is %f\n", root1);
    }
  else 
    {
      printf("Root are not real\n");
      rootOfDisc = sqrtf(-disc);
      printf("Complex roots contains both real and imag part\n");
      // used as vars here.
      root1 = (-b) / (2 * a);
      root2 = rootOfDisc / (2 * a);
      printf("Roots are %f + i%f and %f - i%f\n", root1, root2, root1, root2);
    }
}  
      
     
    
    
