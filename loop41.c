// Write a C Program to convert a decimal number in binary
#include<stdio.h>
int main()
{
    int i,val=0,rem=0,sum=0,count=1;
    printf("Enter A Value : ");
    scanf("%d",&val);
    while(val)
    {
        rem=val%2;
        val=val/2;
        sum=sum+(rem*count);
        count=count*10;
    }
    printf("%d ",sum);
}