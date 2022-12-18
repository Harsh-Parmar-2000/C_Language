#include<stdio.h>
void main()
{
    float i,sum=1,a=0;
    for(i=2;i<=50;i++)
    {
        a=1/i;
        sum=sum+a;
    }
    printf("Sum=%.2f",sum);
}