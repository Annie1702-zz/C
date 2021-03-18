#include<stdio.h>
#include<conio.h>

struct Time
{
    int hr,min,sec;
}s1,s2,s3;

void main()
{
    int tsec1,tsec2,tsec3;
    clrscr();
    printf("Enter 1st time in hours, minutes and seconds - ");
    scanf("%d%d%d",&s1.hr,&s1.min,&s1.sec);
    printf("Enter 2st time in hours, minutes and seconds - ");
    scanf("%d%d%d",&s2.hr,&s2.min,&s2.sec);
    while(s2.sec>s1.sec)
    {
	--s1.min;
	s1.sec += 60;
    }
    s3.sec = s1.sec - s2.sec;
    while(s2.min>s1.min)
    {
	--s1.hr;
	s1.min +=60;
    }
    s3.min = s1.min - s2.min;
    s3.hr = s1.hr - s2.hr;
    printf("Time Difference is %d:%d:%d",s3.hr,s3.min,s3.sec);
    getch();
}