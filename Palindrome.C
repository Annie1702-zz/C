//Program to find if the given number is Palindrome or not

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rev=0,i,a,temp;
    clrscr();
    printf("Enter the number  ");
    scanf("%d",&a);
    num=a;
    for(;a!=0;)
    {
        temp=a%10;
        rev=rev*10+temp;
        a=a/10;
    }
    if(rev==num)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
    getch();
}