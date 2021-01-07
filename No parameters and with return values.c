#include<stdio.h>
void main()
{
    int add();
    int s;
    s=add();
    printf("Sum = %d",s);
}

int add()
{
    int a,b;
    printf("Enter the values of a and b - ");
    scanf("%d %d",&a,&b);
    return a+b;
}
