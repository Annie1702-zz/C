#include<stdio.h>
#include<conio.h>
void bsort(int[],int);
void main()
{
    int i,j,m;
    clrscr();
    printf("Enter the no. of elements - ");
    scanf("%d",&m);
    int ar[m];
    printf("Enter the elements - ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&ar[i]);
    }
    bsort(ar,m);
    printf("The Sorted Array is - \n");
    for(i=0;i<m;i++)
    {
        printf("%d ",ar[i]);
    }
getch();
}
void bsort(int ar[],int m)
{
    int temp,i,j,a=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<(m-1);j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
        printf("Array in Pass %d - ",++a);
        for(int k=0;k<m;k++)
        {
            printf("%d ",ar[k]);
        }
        printf("\n");
    }
}
