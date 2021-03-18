#include<stdio.h>
#include<conio.h>
#include<math.h>

struct Time
{
	int hr,min,sec;
}t1,t2,t3;

void main()
{
	int tot1,tot2;
	clrscr();
	printf("Enter 1st time in HH:MM:SS - ");
	scanf("%d%d%d",&t1.hr,&t1.min,&t1.sec);
	printf("Enter 2st time in HH:MM:SS - ");
	scanf("%d%d%d",&t2.hr,&t2.min,&t2.sec);
	tot1 = t1.hr*3600 + t1.min*60 + t1.sec;
	tot2 = t2.hr*3600 + t2.min*60 + t2.sec;
	if(tot1>tot2)
	{
		while(t2.sec>t1.sec)
		{
			--t1.min;
			t1.sec += 60;
		}
		t3.sec = t1.sec - t2.sec;
		while(t2.min>t1.min)
		{
			--t1.hr;
			t1.min += 60;
		}
		t3.min = t1.min - t2.min;
		t3.hr = t1.hr - t2.hr;
	}
	else
	{
		while(t2.sec<t1.sec)
		{
			--t2.min;
			t2.sec += 60;
		}
		t3.sec = t2.sec - t1.sec;
		while(t2.min<t1.min)
		{
			--t2.hr;
			t2.min += 60;
		}
		t3.min = t2.min - t1.min;
		t3.hr = t2.hr - t1.hr;
	}
	printf("The Time Diff is %d:%d:%d",t3.hr,t3.min,t3.sec);
	getch();
}
