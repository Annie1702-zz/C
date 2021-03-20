#include<stdio.h>
#include<conio.h>
struct Student
{
    char name[30];
    char grad[1];
    int roll;
    int marks;
};
void main()
{
    struct Student s[100];
    int n,i;
    clrscr();
    printf("Enter the no. of students - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("Enter details of student %d :\n",i+1);
	printf("\nEnter name - ");
	scanf("%s",s[i].name);
	printf("Enter roll - ");
	scanf("%d",&s[i].roll);
	printf("Enter marks - ");
	scanf("%d",&s[i].marks);
	printf("Enter grade - ");
	scanf("%s",s[i].grad);
    }
    printf("--------------Students  Details---------------");
    printf("\nName\t\tRoll\t\tMarks\t\tGrade\n");
    for(i=0;i<n;i++)
    {
	printf("\n%s\t\t%d\t\t%d\t\t%c",s[i].name,s[i].roll,s[i].marks,s[i].grad);
    }
    getch();
}