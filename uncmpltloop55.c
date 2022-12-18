/*   Write a program in C to convert a decimal number to hexadecimal. 
Test Data :
Input any Decimal number: 79
Expected Output :
The equivalent Hexadecimal Number : 4F  */
#include<stdio.h>
int main()
{
    int i,val,rem=0,d=0,c=1;
    char hd[100];
    printf("Input any Decimal Number : ");
    scanf("%d",&val);
    while(val)
    {
        rem=val*16;
        if(rem<10)
        hd[c++]=48+rem;
        else
        hd[c++]=55+rem;
        val=val/10;
    }
    for(d=c-1;d>0;d--)
    {
    printf("%c",hd[c]);
    }
}