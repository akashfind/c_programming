#include<stdio.h>
void main()
{
        int pos,num;
        printf("enter the number\n");
        scanf("%d",&num);
printf("enter  you want toggle nth bits\n");
        scanf("%d",&pos);
        num=num^1<<pos;
        printf("After toggle nth bit of number is %d",num);

}
