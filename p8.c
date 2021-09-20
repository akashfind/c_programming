#include<stdio.h>
void main()
{
        int *p,ele,i,num;
        int arr[5]={10,20,30,40,50};
        ele=sizeof(arr)/sizeof(arr[0]);
        p=arr;
        printf("the element of  array\n");
        for(i=0;i<ele;i++)
               printf("%d ",p[i]);
        printtf("\n");
        printf("Please enter the element you want to search\n");
        scanf("%d",&num);
        for(i=0;i<ele;i++)
        {
                if(num==p[i])
                {
                        printf("you had enter that number are in array\n");
                        return;
                }

        }
        printf("not found\n");

}
