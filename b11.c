#include<stdio.h>
void main()
{
        int pos,i,r,num;
        printf("enter the number\n");
        scanf("%d",&num);
        printf("the binary of number is \n");
        for(pos=31;pos>=0;pos--)
        {  
      r=num>>pos&1;
      printf("%d",r);

        }
        printf("\nthe  flip bit of binary no %d\n",r);
        for(pos=31;pos>=0;pos--)
        {
      r=!(num>>pos&1);
      printf("%d",r);

        }
        
}
