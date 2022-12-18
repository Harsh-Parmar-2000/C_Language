#include<stdio.h>
int main()
{
    int i=1,a=1,b=100;
    for(i=0;i<=10;i++)
    {
        printf("A   =   %d  B   =   %d\n",a,b);
        a=a+5;
        b=b-10;
    }
    return 0;
}