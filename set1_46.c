//Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.
#include<stdio.h>
void main()
{
    double d=1,b,i;
    double sum;
    for(i=1;i<8;i+=2)
    {
        b=i/d;
        sum=sum+b;
        d=d*2;
    }
    printf("sum=%.2lf",sum);
}