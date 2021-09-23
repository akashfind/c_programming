#include <stdio.h>
#include<stdlib.h>
typedef struct st
{
    int data;
    struct st *next;
}ST;
void add_begin(ST **ptr)
{
    ST *new,*temp;
    new=malloc(sizeof(ST*));
    printf("Enter data\n");
    scanf("%d",&new->data);
    new->next=*ptr;
    *ptr=new;
}
void print(ST *p)
{
    ST *temp;
    temp=p;
    while(temp)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }

}
void delete(ST **p)
{
    ST *temp;
    temp=*p;
    while(temp->next)
{
    temp=temp->next;
    
}
free(temp);
    
}

int main()
{
    ST *hp=0;
    add_begin(&hp);
    add_begin(&hp);
    printf("Before last node delete\n");
    print(hp);
    delete(&hp);
    printf("After last node delete\n");
    print(hp);
    return 0;
}
