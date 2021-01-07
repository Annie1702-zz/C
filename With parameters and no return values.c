#include<stdio.h>
void main()
{
    void add(int,int);
    int a,b;
    printf("Enter the values of a and b - ");
    scanf("%d %d",&a,&b);
    add(a,b);
}

void add(int a, int b)
{
    printf("Sum = %d",a+b);
}

