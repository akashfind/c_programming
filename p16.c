#include<stdio.h>
#include<stdlib.h>
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
        for(i=0,j=l-1;i<l/2;i++,j--)
        {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
        }
        printf("\nafter the reverse the string\n");
        printf("%s",p);
}
