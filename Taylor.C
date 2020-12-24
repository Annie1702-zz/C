//Program for Sin series using Taylor series

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<float.h>
#define pi 3.142
void main()
{
    int i,degree;
    float x,sum=0,term,den,num;
    printf("Enter the degree  ");
    scanf("%d",&degree);
    x = degree*(pi/180);
    num =x;
    den = 1;
    i = 2;
    do
    {
        term = num/den;
        num = -num*x*x;
        den = den*i*(i+1);
        sum = sum + term;
        i = i+2;
    }
    while(fabs(term)>= FLT_EPSILON);
    printf("\nThe sin(%d) = %.3f",degree,sum);
    printf("\nUsing library function, the sin(%d) = %.3f\n",degree,sin(x));
}