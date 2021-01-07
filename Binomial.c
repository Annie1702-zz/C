#include<stdio.h>
void main()
{
    int fact(int);
    int n,r,nCr;
    printf("Enter the value of n and r - ");
    scanf("%d %d",&n,&r);
    nCr = fact(n)/(fact(r)*fact(n-r));
    printf("Value of nCr is %d",nCr);
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}