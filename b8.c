#include<stdio.h>
void main()
{
        int pos=31,num,r;
        printf("enter the number\n");
        scanf("%d",&num);
        for(pos=0;pos<=31;pos++)
        {
        r=num>>pos&1;
        if(r==1)
        {
                printf("The lowest set bit in number is %d",pos);
                return;
        }
       
        }
}
