#include<stdio.h>
void sum(void);
void sub(void);
void mul(void);
void div(void);
void main()
{
    sum();
    sub();
    mul();
    div();
}
void sum()
{
    int a=10,b=5,sum=0;
    sum=a+b;
    printf("Sum=%d\n",sum);
}

void sub()
{
    int a=10,b=5,sub=0;
    sub=a-b;
    printf("sub=%d\n",sub);
}

void mul()
{
    int a=10,b=5,mul=0;
    mul=a*b;
    printf("mul=%d\n",mul);
}

void div()
{
    int a=10,b=5,div=0;
    div=a/b;
    printf("divide=%d",div);
}
