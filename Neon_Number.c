#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    scanf("%d",&num);
    int sq=(num*num);
    while(sq>0)
    {
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(sum==num)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}