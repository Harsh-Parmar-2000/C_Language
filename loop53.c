/*   Write a program in C to convert a binary number to octal. 
Test Data :
Input a binary number :1001
Expected Output :
The Binary Number : 1001
The equivalent Octal Number : 11    */
#include<stdio.h>
#include<math.h>
int main()
{
    int val,oct=0,count=1,i=0,sum=0,rem=0,base=1,rem1=0;
    printf("Input a Binary Number : ");
    scanf("%d",&val);
    while(val)
    {
        rem=val%10;
        val=val/10;
        sum=sum+(rem*pow(2,i));
        i++;
    }
    printf("\nThe Equivalent Octal Number : %d",sum);
    while(sum)
    {
        rem1=sum%8;
        oct=oct+(rem1*count);
        sum=sum/8;
        count=count*10;
    }
    printf("\nThe Equivalent Octal Number : %d",oct);
}