#include<stdio.h>
void main()
{
        char *s="hi welcome to thundersoft";
FILE *fp=fopen("wdata","w");
        if(fp==0)
                printf("fail to create file\n");
        else
                printf("successful\n");
fprintf(fp,"%s",s);
}
