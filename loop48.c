/*  Write a C program to find Strong Numbers within a range of numbers. 
Test Data :
Input starting range of number : 1
Input ending range of number: 200
Expected Output :
The Strong numbers are :
1 2 145                     */
#include<stdio.h>
int main()
{
    int strt,end,i,r=0,sum=0,num=0,j=0,fact=1,rem=0;
    printf("Input Starting Range Of Number : ");
    scanf("%d",&strt);
    printf("Input Ending Range Of Number : ");
    scanf("%d",&end);
    printf("The Strong Number are : ");
    for(i=strt;i<=end;i++)
    {
        sum=0;
        num=i;
        while(num>0)
        {
            fact=1;
            rem=num%10;
            for(j=1;j<=rem;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            num=num/10;
        }
        
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}