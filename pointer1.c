//  •	Add two numbers using pointers
#include<stdio.h>
int main()
{
    int a,b,*c,*d,sum;
    printf("Enter Two Values:\n");
    scanf("%d%d",&a,&b);
    c=&a;
    d=&b;
    sum=*c+*d;
    printf("sum=%d",*&sum);
}