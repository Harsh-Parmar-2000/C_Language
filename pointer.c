#include<stdio.h>
int reverse(int *,int *);
int main()
{
    int a=5,b=10,*j;
    j=&a;
    reverse(j,&b);
    printf("a=%d\tb=%d",a,b);
}
int reverse(int * x,int * y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}