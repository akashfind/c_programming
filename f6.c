#include<stdio.h>
  
void main()
{
        FILE *fp1,*fp2;
        int ch;
        fp1=fopen("data","r");
        fp2=fopen("sharma","w");
        if(fp1==0)
                printf("Not opened\n");
        else
        {
                printf("sucess\n");

        }
        while((ch=fgetc(fp1))!=-1)
        {
                fputc(ch,fp2);
        }

}
