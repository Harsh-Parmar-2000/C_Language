/*  Write a program in C to convert a decimal number into octal without using 
an array. 
Test Data :
Enter a number to convert : 79
Expected Output :
The Octal of 79 is 117      */
#include<stdio.h>
int main()
{
    int i,val=0,rem,sum=0,count=1;
    printf("Enter A Value : ");
    scanf("%d",&val);
    while(val)
    {
        rem=val%8;
        val=val/8;
        sum=sum+(rem*count);
        count=count*10;
    }
    printf("%d ",sum);
}