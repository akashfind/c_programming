#include<stdio.h>
void main()
{
        int alp=0,n=0,sp=0,i;
        char s[10]="hell12@h";
        for(i=0;s[i];i++)
        {
                if((s[i]>='a'& s[i]<='z')|(s[i]>='A'& s[i]<='Z'))
                        alp++;
                if(s[i]>='0'& s[i]<='9')
                        n++;
                if((s[i]>=33 & s[i]<=47)|s[i]==64)
                        sp++;
        }
        printf("total number of alphabets=%d\n",alp);
        printf("total number of digits=%d\n",n);
        printf("total number of special char=%d\n",sp);
} 
