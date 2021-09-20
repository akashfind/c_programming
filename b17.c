#include<stdio.h>
void main()
{
        int pos1,pos2,num;
        printf("Enter the number\n");
        scanf("%d",&num);
         printf("Enter the pos1\n");
        scanf("%d",&pos1);
         printf("Enter the pos2\n");
        scanf("%d",&pos2);
        printf("The set the pos1 and pos2\n");
          num=num&~(1<<pos1);
         num=num&~(1<<pos2); 
          
                   printf(" After set number is %d\n",num);
        
}
