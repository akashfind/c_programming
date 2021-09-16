#include<stdio.h>
void main()
{
        int pos,num,r;
        printf("Enter the number\n");
        scanf("%d",&num);
        printf("The binary of number\n");
        for(pos=31;pos>=0;pos--)
        {
                r=num>>pos&1;
        printf("%d",r);
        }
}
