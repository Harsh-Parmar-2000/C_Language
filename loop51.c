/*  Write a program in C to convert an octal number to a decimal without 
using an array. 
Test Data :
Input an octal number (using digit 0 - 7) :745
Expected Output :
The Octal Number : 745
The equivalent Decimal Number : 485             */
#include<stdio.h>
#include<math.h>
int main()
{
    int val,rem=0,i=0,sum=0;
    printf("Input an Octal Number (using digit 0 - 7) : ");
    scanf("%d",&val);
    while(val>0)
    {
        rem=val%10;
        val=val/10;
        sum=sum+rem*(pow(8,i));
        i++;
    }   
    printf("Decimal = %d",sum);
}

#include<stdio.h>
int fun(int);
int main()
{
    int n=25;
    fun(25);
}
int fun(int n){
    if(n==0)
    return;
 printf("%d",n%2);
    fun(n/2);
       
}