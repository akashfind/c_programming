#include<stdio.h>
void main()
{
        int ch; 
        FILE *fp;
        fp=fopen("data","r");
        if(fp==0)
                printf("File is not there");
        else
                printf("Successful opened the file\n");
        while((ch=fgetc(fp))!=-1)
                printf("%c",ch);
}
