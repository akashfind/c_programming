
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q;
    p=malloc(sizeof(int));
    q=malloc(sizeof(int));
printf("Enter two number\n");
    scanf("%d",p);
    scanf("%d",q);
 printf("swap of two number is %d",(*p+*q));
    
}
