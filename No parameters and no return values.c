#include<stdio.h>
void main()
{
    void add();
    add();
}

void add()
{
    int a,b;
    printf("Enter the values of a and b - ");
    scanf("%d %d",&a,&b);
    printf("Sum = %d",a+b);
}
