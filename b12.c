#include<stdio.h>
void main()
{
        int pos=31,num,r,c=0;
        printf("enter the number\n");
        scanf("%d",&num);
        for(pos=0;pos<=31;pos++)
        {
        r=num>>pos&1;
        if(r==1)
        {
         c++;
        }

        }
        printf("total zeros in binary no is %d\n",32-c);
        printf("total ones in binary no is %d\n",c);
}
