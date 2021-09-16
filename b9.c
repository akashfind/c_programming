#include<stdio.h>
void main()
{
        int pos,i,r,c=0,num;
        printf("enter the number\n");
        scanf("%d",&num);
        for(pos=0;pos<=31;pos++)
        {
                r=num>>pos&1;
                        if(r==1)
                                break;
                        else
                                c++;

        }
        printf("the trailing zeros are %d",c);
}
