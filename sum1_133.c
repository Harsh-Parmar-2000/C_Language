// Write a C program to calculate the sum of two given integers and count the number of digits of the sum value
#include<stdio.h>
int main()
{
    int a,b,sum,i=0;
    printf("Enter Two Digits To Sum\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    while(sum!=0)
    {
        sum=sum/10;
        i=i+1;
    }
    printf("Count=%d",i);
}