#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];
int l=0,temp,i,j;
   printf("Enter a string to reverse\n");
   scanf("%[^\n]",s);
l=strlen(s);
for(i=0;i<l/2;i++)
{
        for(j=l-1;j>i;j--)
        {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
        }
}
   printf("Reverse of the string: %s\n", s);

return 0;
}
