i#include<stdio.h>
void main()
{
        int pos=0,num;
        printf("enter the number\n");
        scanf("%d",&num);
        num>>pos&1?printf(" the LSB of number is Set\n"):printf("the LSB of number is Clear\n");

}
