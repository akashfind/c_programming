<<<<<<< HEAD
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
=======
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
>>>>>>> d3a15ec3fe49a17137c3ced9cec82ecd81add635
