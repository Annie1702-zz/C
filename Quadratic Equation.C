//Compute all the roots of quadratic equation

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x1,x2;
    clrscr();
    printf("Enter the three co-efficients  ");
    scanf("%f%f%f",&a,&b,&c);
    d = pow(b,2) - 4*a*c;
    if(d==0)
    {
        x1 = x2 = -b/(2*a);
        printf("\nRoots are real and equal\n");
        printf("The roots are \n x1 = x2 = %f\n",x1);
    }
    else if(d>0)
    {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("\nRoots are real and distinct\n");
        printf("The roots are \n x1 = %f\n x2 = %f\n",x1,x2);
    }
    else
    {
        x1 = -b/(2*a);
        x2 = sqrt(fabs(d))/(2*a);
        printf("\nRoots are imaginary\n");
        printf("The roots are \n x1 = %f + i %f \nx2 = %f - i %f\n",x1,x2,x1,x2);   
    }
    getch();
}