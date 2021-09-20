#include <stdio.h>
#include<stdlib.h>

typedef struct st
{
    int number;
    struct st *next;
}ST;
void print(ST * );
void add_end(ST **);
int main()
{
    int *htpr=0; 
    printf("Hello World");
add_end(&htpr);
add_end(&htpr);
print(htpr);
    return 0;
}
void add_end(ST **ptr)
{
    ST *new,*temp;
    new=malloc(sizeof(ST*));
    printf("Enter new node\n");
    scanf("%d",&new->number);
    if(*ptr==0)
    {
        *ptr=new;
        temp=new;
        new->next=0;
    }
    else
    {
        temp->next=new;
        new->next=0;
        temp=new;
    
    }
}
void print(ST *ptr)
{
    while(ptr)
    {
    printf("%d ",ptr->number);
    ptr=ptr->next;
    }
}

    
    
