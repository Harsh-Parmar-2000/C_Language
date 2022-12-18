//  Write a C program that reads an integer and find all its divisor.
#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter A Integer");
    scanf("%d",&num);
    printf("Divisors Are:\n");
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            
            printf("%d\n",i);
        }
    }
}