/*  Write a program in C to convert an octal number into binary. 
Test Data :
Input an octal number (using digit 0 - 7) :57
Expected Output :
The Octal Number : 57
The equivalent Binary Number : 101111   */
#include<stdio.h>
#include<math.h>
int main()
{
    int val,rem=0,i=0,sum=0,base=1,bin=0;
    printf("Input A Octal Number (using digit 0-7)\n");
    scanf("%d",&val);
    while(val>0)
    {
        rem=val%10;
        sum=sum+(rem*pow(8,i));
        val=val/10;
        i++;
    }
    rem=0;
    printf("sum=%d\n",sum);
    while(sum)
    {
        rem=sum%2;
        sum=sum/2;
        bin=bin+rem*base;
        base=base*10;
    }
    printf("The Equivalent Binary Number %d ",bin);
}