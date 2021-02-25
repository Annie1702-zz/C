#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char ar[50];
    int j,v,c=0,a=0,e=0,i=0,o=0,u=0,n=0;
    clrscr();
    printf("Enter the string - ");
    scanf("%s",ar);
    for(j=0;j<strlen(ar);j++)
    {
        if(isalpha(ar[j])!=0)
        {
            if(ar[j]=='a'||ar[j]=='A')
            {
                a++;
            }
            else if(ar[j]=='e'||ar[j]=='E')
            {
                e++;
            }
            else if(ar[j]=='i'||ar[j]=='I')
            {
                i++;
            }
            else if(ar[j]=='o'||ar[j]=='O')
            {
                o++;
            }
            else if(ar[j]=='u'||ar[j]=='U')
            {
                u++;
            }
            else
            {
                c++;
            }
        }
        else
        {
            n++;
        }
    }
    printf("Vowels = %d\nNo.of A/a = %d\nNo.of E/e = %d\nNo.of I/i = %d\nNo.of O/o = %d\nNo.of U/u = %d\nConsonants = %d\nNumbers = %d\n",a+e+i+o+u,a,e,i,o,u,c,n);
    getch();
}
