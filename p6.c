#include<stdio.h>
void main()
{
int i,*temp;
int a[5]={2,3,4,5,6};
int *p=a;
int b[5]={7,8,9,10,11};
int *q=b;
printf("Before swap array\n");
printf("a[5]=");
for(i=0;i<5;i++)
printf("%d ",*(p+i));
printf("  b[5]=");
for(i=0;i<5;i++)
printf("%d ",*(q+i));
for(i=0;i<5;i++)
{
        temp=p[i];
        p[i]=q[i];
        q[i]=temp;
}
printf("\nafter swap array\n");
printf("a[5]=");
for(i=0;i<5;i++)
printf("%d ",*(p+i));
printf("  b[5]=");
for(i=0;i<5;i++)
printf("%d ",*(q+i));

}
