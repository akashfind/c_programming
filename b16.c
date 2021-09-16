#include<stdio.h>
void main()
{
        int pos,num,r;
        printf("Enter the number\n");
        scanf("%d",&num);
        printf("The binary of number\n");
          r=num>>0&1;
          if(r==1)
        printf("the number is old\n");
          else
                   printf("the number is even\n");
        
}
