#include<stdlib.h>
#include<string.h>
void main()
{
        int i,j,l,temp;
        char *p;
        p=malloc(30);
        printf("enter the string\n");
        scanf("%s",p);
        printf("Before the reverse the string\n");
        printf("%s",p);
        for(l=0;p[l];l++);
        for(i=0;i<l-1;i++)
        {
                for(j=0;j<l-i-1;j++)
                        if((p[j]>p[j+1]))
                        {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
                        }
        
        }
         printf("\nAfter sort the string\n");
        printf("%s",p);
}
