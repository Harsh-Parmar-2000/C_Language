// Write a C program to find the last non-zero digit of the factorial of a given positive integer. 
#include<stdio.h>
int main()
{
    long long temp=1;
    int num,new=0,i,digit;
    printf("Enter A Number\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        temp=temp*i;
    }
    printf("factorial of =%lld\n",temp);
    while(temp%10==0)
    {
        temp=temp/10;
    }
    new=temp%10;
    printf("Temp=%d",new);
}