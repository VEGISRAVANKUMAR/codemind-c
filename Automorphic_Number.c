#include<stdio.h>
#include<math.h>
int main()
{ 
    int n,sq,r=0,i=0,t; 
    scanf("%d",&n);
    t=n;
    sq=n*n; 
    while(n!=0)
    { 
        r=r+((sq%10)*pow(10,i));
        sq=sq/10; 
        n=n/10;
        i++; 
        
    }
    if(t==r)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
    
}