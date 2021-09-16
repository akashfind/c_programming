#include<stdio.h>
void main()
{
        int pos=31,num;
        printf("enter the number\n");
        scanf("%d",&num);
        num>>pos&1?printf(" the MSB of number is Set\n"):printf("the MSB of number is Clear\n");

}
