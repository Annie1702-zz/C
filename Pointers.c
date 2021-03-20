#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n,sum=0,var,num=0,i,*a;
    float mean,stddev,variance;
    printf("Enter no. of elements - ");
    scanf("%d",&n);
    a = (int*)calloc(n,sizeof(int));
    printf("Enter the elements - ");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        sum += *(a+i);
    }
    mean = (float)sum/(float)n;
    for(i=0;i<n;i++)
    {
        var = (*(a+i))-(float)mean;
        num += var*var;
    }
    variance = (float)num/n;
    stddev = sqrt(variance);
    printf("\nMean - %.2f",mean);
    printf("\nVariance - %.2f",variance);
    printf("\nStandard Deviation - %.2f",stddev);
}
