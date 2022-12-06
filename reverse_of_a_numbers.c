#include<stdio.h>
int main()
{
    int a,i,sum=0,rem;
    scanf("%d",&a);
    for(i=1;i=a;i++)
    {
        rem=a%10;
        a=a/10;
        sum=sum*10+rem;
    }
    printf("%d",sum);
}