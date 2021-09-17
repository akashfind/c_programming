#include<stdio.h>
void main()
{
        int *p,*q,ele,i,j,temp;
        int arr[5]={10,20,30,40,50};
        ele=sizeof(arr)/sizeof(arr[0]);
        p=arr;
        printf("Before  reverse the array\n");
        for(i=0;i<ele;i++)
               printf("%d ",p[i]);
        for(i=0,j=ele-1;i<ele/2;i++,j--)
        {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
        }
        printf("after reverse the array\n");
       for(i=0;i<ele;i++)
               printf("%d ",p[i]);
}
