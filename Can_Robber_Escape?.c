#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]<n)
        {
            l=1;
        }
        else
        {
            l=0;
            break;
        }
    }
    if(l==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}