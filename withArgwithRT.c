#include<stdio.h>
int sum(int,int);
void main()
{
    int a=5,b=6,j;
    j=sum(a,b);
    printf("sum=%d",j);
}
int sum(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}