[200~#include <stdio.h>
 void main()
{
    int num1, num2;
    printf("\nEnter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("\nThe numbers before swapping are Number1= %d Number2 = %d", num1, num2);

    num1=num1 ^num2;
    num2=num1 ^num2;
    num1=num1 ^num2;
    printf("\nThe numbers after swapping are Number1= %d Number2 = %d", num1, num2);
}
