#include<stdio.h>
int main()
{
    long long int a,b,l,hcf=0;
    scanf("%lld%lld",&a,&b);
    for(l=1;l<=a&&l<=b;l++)
    {
        if(a%l==0 && b%l==0)
        {
            hcf=l;
        }
    }
    long long int lcm=a*b/hcf;
    printf("%lld",lcm);
}