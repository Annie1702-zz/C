#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c,count=0;
    printf("Enter no. of rows & columns - ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements - ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Matrix - \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("There are %d zeros out of %d elements\n",count,r*c);
    if(count>((r*c)/2))
    {
        printf("It is a sparse matrix");
    }
    else
    {
        printf("It is not a sparse matrix");
    }
}
