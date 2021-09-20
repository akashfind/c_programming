#include<stdio.h>
#include<string.h>
void main()
{
        int l=0,i=0,j=0;
        char s[20];
        printf("Enter the string\n");
        scanf("%[^\n]",s);
        l=strlen(s);
        j=l-1;
        while(j>i)
        {
               if(s[i++]!=s[j--])
               {
                printf("string is not palindrome\n");
                return;
               }
        }
        printf("string is  palindrome\n");
}
