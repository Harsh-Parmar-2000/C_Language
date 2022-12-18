/* Write a program in C to convert a binary number into a decimal number 
using math function. 
Test Data :
Input the binary number :1010100
Expected Output :
The Binary Number : 1010100
The equivalent Decimal Number is : 84 */
#include<stdio.h>
#include<math.h>
int main()
{
    int val,i,sum=0,base=1,rem=0;
    printf("Enter A Binary Number = ");
    scanf("%d",&val);
    for(i=0;val>0;i++)
    {
        rem=val%10;
        val=val/10;
        sum=sum+(rem*pow(2,i));
    }
    printf("%d",sum);
}