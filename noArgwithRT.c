#include<stdio.h>
int sum();
void main()
{
    int s;
    s=sum();
    printf("Sum=%d",s);
}
int sum()
{
    int a=5,b=6;
    return (a+b);
}
