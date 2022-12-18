/*  Write a program in C to find LCM of any two numbers using HCF. 
Test Data :
Input 1st number for LCM: 15
Input 2nd number for LCM: 20
Expected Output :
The LCM of 15 and 20 is : 60    */
#include<stdio.h>
int main()
{
    int x,y,n1=0,n2=0,lcm=0;
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
    lcm=(n1*n2)/x;
    printf("The LCM Of %d and %d is : %d ",n1,n2,lcm);
}