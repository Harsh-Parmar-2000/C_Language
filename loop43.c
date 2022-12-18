/*  Write a C program to find HCF (Highest Common Factor) of two numbers. 
Test Data :
Input 1st number for HCF: 24
Input 2nd number for HCF: 28
Expected Output :
HCF of 24 and 28 is : 4 */
#include<stdio.h>
int main()
{
    int x,y,n1=0,n2=0;
    printf("Input 1st number for HCF :");
    scanf("%d",&x);
    printf("Input 2nd number for HCF :");
    scanf("%d",&y);
    n1=x;
    n2=y;
    while(x!=y)
    {
        if(x>y)
        x=x-y;
        else
        y=y-x;
    }
    printf("HCF of %d and %d is : %d ",n1,n2,x);
}