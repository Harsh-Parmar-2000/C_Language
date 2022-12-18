/* Write a C program that accepts a positive integer less than 500 
and prints out the sum of the digits of this number.*/ 
#include<stdio.h>
int main()
{
    int num,sum=0,rem=0;
    printf("Enter A Positive Integer");
    scanf("%d",&num);
    if(num>0 && num<500)
    {
        while(num!=0)
{
        rem=num%10;
        sum=sum+rem;
        num=num/10;
}
printf("Sum of Digits=%d",sum);
    }
    else{
        printf("Enter Valid Value");
    }
}