#include<stdio.h>
void main()
{
        int pos,num,c=0,r;
        printf("Enter the no\n");
        scanf("%d",&num);
        for(pos=0;pos<=32;pos++)
        {
                r=num>>pos&1;
                if(r==1)
                        c++;


        }
        if(c%2==1)
                printf("power of two\n");
        else
                printf("not power of two\n");
}
