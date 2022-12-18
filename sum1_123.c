//Write a C program that reads two integers m, n and compute the sum of n odd numbers starting from m
#include<stdio.h>
int main()
{
    int m,n,i,cnt=0,sum;
    printf("Enter Two Integers\n");
    scanf("%d",&m);
    printf("how many number\n");
    scanf("%d",&n);
    for(i=m;cnt<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
            cnt++;
        }
    }
    printf("SUM=%d",sum);
}