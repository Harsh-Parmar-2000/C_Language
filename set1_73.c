/* Write a C program that reads in two integers 
and check whether the first integer is a multiple of the second integer*/
#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter 1st & 2nd Number\n");
    scanf("%d %d",&a,&b);

    if(a%b==0)
    {
        printf("%d Is multiple of %d",a,b);
    }
    else{
        printf("%d is not a multiple of %d",a,b);
    }
}