#include<stdio.h>
void main()
{
        int i;
        char *p="Pkash";
        char *q="Akash";
        for(i=0;p[i];i++)
        {
                if(p[i]!=q[i])
                {
                        printf("both string are not same\n");
                return;
                }
         }
        printf("Both string are same\n");
}
