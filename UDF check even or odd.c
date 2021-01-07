#include<stdio.h>
void main()
{
    void check(int);
    int a;
    printf("Enter the number - ");
    scanf("%d",&a);
    check(a);
}

void check(int a)
{
    if(a%2==0)
    {
        printf("It ia an even number");
    }
    else
    {
        printf("It is a odd number");
    }
}
