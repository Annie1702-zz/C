//Program to form a simple calculator

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,s=0,choice;
    printf("Enter first number  ");
    scanf("%d",&a);
    printf("Enter second number  ");
    scanf("%d",&b);
    printf("1. Addition\n2. Subtration\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\nEnter your choice - ");
    scanf("%d",&choice);
    switch(choice)
    {
	case 1:
	s=a+b;
        printf("Addition of %d & %d is %d",a,b,s);
        break;
        
        case 2:
        s=a-b;
        printf("Subtraction of %d & %d is %d",a,b,s);
        break;
        
        case 3:
        s=a*b;
        printf("Multiplication of %d & %d is %d",a,b,s);
        break;
        
        case 4:
        if(b==0)
        {
            printf("Division not possible as number 2 is 0");
            break;
        }
        else
        {
            s=a/b;
            printf("Division of %d & %d is %d",a,b,s);
            break;
        }
        
        case 5:
        if(b==0)
        {
	    printf("Modulus not possible as number 2 is 0");
	}
	else
	{
	    s=a%b;
	    printf("Modulus of %d & %d is %d",a,b,s);
	}
	break;

	case 6:
	break;
        
        default:
        printf("Enter valid options\n");
    }
    getch();
}