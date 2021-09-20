#include<stdio.h>
void main()
{
        int c=0,words=0,line=0,ch=0;
        FILE *fp=fopen("data","r");
        if(fp==0)
                printf("fail\n");
        else
                printf("sucess open\n");
        while((ch=fgetc(fp))!=-1)
        {
        c++;
        if(ch=='\n'||ch=='\0')
                line++;
        if(ch==' '||ch=='\n'||ch=='\t'||ch=='\0')
                words++;


        }
        if(c>0)
        {
                words++;
                line;
        }
        printf("total character in file =%d\n",c);
         printf("total words in file =%d\n",words);
          printf("total lines in file =%d\n",line);
}
~   
