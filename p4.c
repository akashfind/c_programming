 #include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p[5],i;
    printf("Enter the element of array\n");
    for(i=0;i<5;i++)
    scanf("%d",(p+i));
    printf("you have entered element of array:-\n");
    for(i=0;i<5;i++)
    printf("%d ",*(p+i));
   // printf(" after swap %d %d ",*p,*q);



}
