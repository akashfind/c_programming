 #include<stdio.h>
void main()
{
int a[5][5],b[5][5],c[5][5],i,j,m,n,k,sum =0;
printf("Enter dimension of matrix m & n:\n");
scanf("%d %d",&m,&n);
printf("Enter first  matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(a+i)+j));
}
}
printf("\nEnter 2 matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(b+i)+j));
}
}
printf("\Multiple of matrix\n");
for(i=0;i<m;i++)
{
        for(j=0;j<n;j++)
         {
		 for (k = 0; k < n; k++)
            {
                sum += (*(*(a + i) + k)) * (*(*(a + k) + j));
            }
		 *(*(c + i) + j) = sum;
		 printf("%d ",*(*(c + i) + j));
         }
printf("\n");
}
}
