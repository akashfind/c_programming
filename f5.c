include<stdio.h>
void main()
{
        int ch1,ch2,c=0;
        FILE *fp1,*fp2;
        fp1=fopen("data","r");
        fp2=fopen("data2","r");
        ch2=fgetc(fp2);
        ch1=fgetc(fp1);
        while((ch1=fgetc(fp1))!=-1 && (ch2=fgetc(fp2))!=-1)
        {
         if(ch1!=ch2)
         {
                 printf("The files are not same\n");
                 c++;
                 break;

        }


}
