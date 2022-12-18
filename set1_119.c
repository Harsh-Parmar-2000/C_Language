// Write a C program to calculate the sum all numbers between two given numbers (inclusive) not divisible by 7
#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    printf("Enter Start Value & End Value\n");
    scanf("%d%d",&a,&b);

    for(i=a+1;i<b;i++)
    {
        if(i%7!=0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("Sum=%d",sum);
}