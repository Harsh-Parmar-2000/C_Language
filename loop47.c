/*  Write a C program to check whether a number is a Strong Number or not. 
Test Data :
Input a number to check whether it is Strong number: 15
Expected Output :
15 is not a Strong number   */
#include<stdio.h>
int main()
{
    int i,val,num=0,sum=0,fact=1,rem=0;
    printf("Enter A Value : ");
    scanf("%d",&val);
        num=val;
        while(num>0)
        {
            fact=1;
            rem=num%10;
            for(i=1;i<=rem;i++)
            {
                fact=fact*i;
            }
            sum=sum+fact;
            num=num/10;
        }
        if(sum==val)
        {
            printf("strong");
        }
        else{
            printf("not");
        }
}