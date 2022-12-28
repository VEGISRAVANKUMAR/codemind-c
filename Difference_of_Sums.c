#include<stdio.h>
int main()
{
    int i,n,sum=0,sums=0,d;
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       sum=sum+(i*i);
   }
   for(i=1;i<=n;i++)
   {
       sums=sums+i;
   }
   d=(sums*sums)-sum;
   printf("%d",d);
}