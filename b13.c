#include<stdio.h>

int leftRotate(int n, unsigned int d)
{
  
   return (n << d)|(n >> (32- d));
}

int rightRotate(int n, unsigned int d)
{
 
   return (n >> d)|(n << (32 - d));
}
 void main()
{
        int n,d;
printf("enter the no\n");
scanf("%d",&n);
printf("no of rotation\n");
scanf("%d",&d);
  printf("Left Rotation of %d by %d is ", n, d);
  printf("%d", leftRotate(n, d));
  printf("\nRight Rotation of %d by %d is ", n, d);
  printf("%d", rightRotate(n, d));
  
}
