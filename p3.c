#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q;
int *temp;
    p=malloc(sizeof(int));
    q=malloc(sizeof(int));
printf("Enter two number\n");
    scanf("%d",p);
    scanf("%d",q);
temp=*p;
p=q;
*q=temp;
    printf("swap of two number is %d",(*p+*q));
    
}
