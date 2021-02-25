#include<stdio.h>
void main()
{
    int i,j,n,a[10][10];
    printf("Enter no. of lines - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i==j||j==0)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(int k=0;k<n-i+8;k++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            if(a[i][j]<=9)
            {
                printf("   ");
                printf("%d",a[i][j]);
            }
            else if(a[i][j]>99)
            {
                printf(" ");
                printf("%d",a[i][j]);
            }
            else if(a[i][j]>9)
            {
                printf("  ");
                printf("%d",a[i][j]);
            }
        }
        printf("\n");
    }
}
