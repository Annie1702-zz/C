#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char s1[30],s2[30];
    int ch,a;
    loop:
    printf("\nEnter a string - ");
    scanf("%s",s1);
    printf("1. String Concatenate\n2. String Compare\n3. String Copy\n4. String Reverse\n5. String Length\n6. Exit\n\nEnter your choice - ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
           printf("Enter 2nd string - ");
           scanf("%s",s2);
           strcat(s1,s2);
           printf("\nConcatenated String is %s",s1);
           break;
           
        case 2:
           printf("Enter 2nd string - ");
           scanf("%s",s2);
           if(strcmp(s1,s2)==0)
           {
               printf("\nThe two strings are equal");
           }
           else
           {
               printf("\nThe two strings are not equal");
           }
           break;
        
        case 3:
           strcpy(s2,s1);
           printf("\nThe copy of String S1 is %s",s2);
           break;
           
        case 4:
           printf("\nThe reverse of String S1 is %s",s1);
           break;
           
        case 5:
           strlen(s1);
           printf("\nThe length of String S1 is %s",s1);
           break;
           
        case 6:
           exit(0);
           
        default:
           printf("\nEnter valid choices!!!!");
    }
    goto loop;
}
