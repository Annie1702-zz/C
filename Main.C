#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<float.h>
#define pi 3.142
int fact(int);
void main()
{
  void calc();
  void palin();
  void quad();
  void taylor();
  void binomial();
  int ch,a;
  clrscr();
  loop:
  printf("\n1. Calculator Program\n2. Palindrome Program\n3. Root Program\n4. Taylor Series Program\n5. Binomial Function\n6. Exit\nWhich program you wanna continue with - ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
      calc();
      break;

    case 2:
      palin();
      break;

    case 3:
      quad();
      break;

    case 4:
      taylor();
      break;
	  
    case 5:
      binomial();
      break;

    case 6:
      break;

    default:
      printf("Enter valid option\n");
  }
  if(ch!=6)
  { 
      printf("Do you wanna continue (1 -> Y / 0 -> N) - "); 
      scanf("%d",&a);
  }
  if(a==1)
  { goto loop; }
  getch();
}

void calc()
{
	int a,b,s=0,choice;
    printf("\nEnter first number -  ");
    scanf("%d",&a);
    printf("Enter second number -  ");
    scanf("%d",&b);
    printf("\n1. Addition\n2. Subtration\n3. Multiplication\n4. Division\n5. Modulus\nEnter your choice - ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    	s=a+b;
	printf("\nAddition of %d & %d is %d\n",a,b,s);
        break;
        
    case 2:
        s=a-b;
	printf("\nSubtraction of %d & %d is %d\n",a,b,s);
	break;

    case 3:
	s=a*b;
	printf("\nMultiplication of %d & %d is %d\n",a,b,s);
	break;

    case 4:
	if(b==0)
	{
	    printf("\nDivision not possible as number 2 is \n0");
	    break;
	}
	else
	{
	    s=a/b;
	    printf("\nDivision of %d & %d is %d\n",a,b,s);
	    break;
	}

    case 5:
	if(b==0)
	{
	       printf("\nModulus not possible as number 2 is 0\n");
	    }
	    else
	    {
	       s=a%b;
	       printf("\nModulus of %d & %d is %d\n",a,b,s);
	    }
	    break;

    default:
	printf("Enter valid options\n");
    }
}

void palin()
{
    int num,rev=0,i,a,temp;
    printf("\nEnter the number -  ");
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
	printf("\nIt is a palindrome\n");
    }
    else
    {
	printf("\nIt is not a palindrome\n");
    }
}

void quad()
{
	float a,b,c,d,x1,x2;
    printf("\nEnter the three co-efficients - ");
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
}

void taylor()
{
    int i,degree;
    float x,sum=0,term,den,num;
    printf("\nEnter the degree -  ");
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
    printf("Using library function, the sin(%d) = %.3f\n",degree,sin(x));
}

void binomial()
{
    int n,r,nCr;
    printf("Enter the value of n and r - ");
    scanf("%d %d",&n,&r);
    nCr = fact(n)/(fact(r)*fact(n-r));
    printf("Value of nCr is %d\n",nCr);
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
