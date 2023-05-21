#include<stdio.h>

int num(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else if(n==3)
    {
        return 4;
    }
    else
    {
        return num(n-1)+num(n-2)+num(n-3);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int k=num(n);
    printf("%d",k);
}