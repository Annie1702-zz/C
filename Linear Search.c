#include<stdio.h>
void main()
{
    int a[100],n,i,s,flag=0;
    printf("Enter no. of elements - ");
    scanf("%d",&n);
    printf("Enter the elements - ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to search - ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
            printf("Element found at %dth position\n",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element not found");
    }
}