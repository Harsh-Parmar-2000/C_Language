#include<stdio.h>
void sum(int,int);
void main()
{
    int a=5,b=6;
    sum(a,b);
}
void sum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("SUM is =%d",sum);
}