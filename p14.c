#include<stdio.h>
void main()
{
        int i,j,l;
        char s[20]="akash";
        char s1[10]="kumar";
        char *p,*q;
        p=s;
        q=s1;
        for(l=0;s[l];l++);

        for(i=l-1,j=0;p[j];i++,j++)
         p[i]=q[j];
                 printf("%s",p);
}
