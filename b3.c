#include<stdio.h>
void main()
{
        int pos,num,r;
        printf("enter the number\n");
        scanf("%d",&num);
printf("enter nth bits\n");
        scanf("%d",&pos);
        r=num>>pos&1;
        printf("nth bit of number is %d",r);

}
