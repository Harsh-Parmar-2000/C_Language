// Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......]. 
#include<stdio.h>
int main()
{
    int m,val,power,term,i;
    printf("Enter A Value\n");
    scanf("%d",&val);
    printf("Enter A Value\n");
    scanf("%d",&term);
    for(i=1;i<=term;i+=2)
    {
        power=pow(val,i);
        m=m*(-m);
    }
}