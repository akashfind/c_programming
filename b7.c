#include<stdio.h>
void main()
{
        int pos=31,num,r;
        printf("enter the number\n");
        scanf("%d",&num);
        for(pos=31;pos>=0;pos--)
        {
        r=num>>pos&1;
        if(r==1)
        {
                printf("The highest set bit in number is %d",pos);
                return;
        }
       
        }
}
