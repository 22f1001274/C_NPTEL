#include<stdio.h>

void main()
{
    int num, decimal_num, remiander, base = 1, binary = 0;
    printf("Enter a decimal integer\n");
    scanf("%d", &num);

    decimal_num = num;
    while (num > 0)
    {
        remiander = num % 2;
        printf("%d", remiander);
    
        binary = binary + remiander * base;
        num = num / 2;
        base = base * 10;
    }
    printf ("\n");
    printf("input number is = %d\n", decimal_num);
    printf("its binary equivalent is = %d\n", binary);

}