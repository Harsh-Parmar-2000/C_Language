// Write a C program that reads in a five-digit integer and determines whether or not it’s a palindrome. 
#include<stdio.h>
void main()
{
    int num,sum=0,n,temp;
    printf("Enter A Five Digit Number");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    printf("%d",sum);
    if(sum==num)
    {
        printf("Valid Palindrome");
    }
    else
    {
        printf("Invalid Palindrome");
    }
}