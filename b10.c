#include<stdio.h>
void main()
{
        int pos,i,msb,c=0,num;
        printf("enter the number\n");
        scanf("%d",&num);
        msb=1<<31;
        for(pos=0;pos<=31;pos++)
        {
                
                        if(num<<pos& msb)
                                break;
                                c++;

        }
        printf("the total leading zeros are %d",c);
}
