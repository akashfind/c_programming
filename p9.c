#include<stdio.h>
#define ROW 2
#define COL 3
void main()
{
        int i,j;
int **p;
int a[2][3]={{10,20,30},{40,50,60}};
printf("2D array\n")
for(i=0;i<ROW;i++)
{
        for(j=0;j<COL;j++) 
                printf("%d ",*(*(a+i)+j));
}   
}
