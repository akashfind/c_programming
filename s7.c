#include<stdio.h>
void main()
{
        int w=1,i;
        char str[30];
        printf("enter the string\n");
        scanf("%[^\n]",str);
        printf("%s",str);
        for(i=0;str[i];i++)
        {
if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        w++;
        }
printf("The total word in string is %d",w);
}
