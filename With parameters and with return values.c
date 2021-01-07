#include<stdio.h>
void main()
{
    int add(int,int);
    int a,b,s;
    printf("Enter the values of a and b - ");
    scanf("%d %d",&a,&b);
    s = add(a,b);
    printf("Sum = %d",s);
}

int add(int a, int b)
{
    return a+b;
}
