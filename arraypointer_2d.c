//  Operations On 2-D Array
#include<stdio.h>
int main()
{
    int i=3,*x;
    float j=2.5,*y;
    char k='c',*z;
    printf("Value Of i  =   %d\n",i);
    printf("Value Of j  =   %f\n",j);
    printf("Value Of k  =   %c\n",k);
    x=&i;
    y=&j;
    z=&k;
    printf("\n\nBy Pointer :\n");
    printf("Value Of i  =   %d\n",*x);
    printf("Value Of j  =   %f\n",*y);
    printf("Value Of k  =   %c\n",*z);
    printf("\n\nAddress By Pointer :\n");
    printf("Address Of I  =   %u\n",x);
    printf("Address Of J  =   %u\n",y);
    printf("Address Of k  =   %u\n",z);
    x++;
    y++;
    z++;
    printf("\n\nNew Address By Pointer :\n");
    printf("NEW Address Of I  =   %u\n",x);
    printf("NEW Address Of J  =   %u\n",y);
    printf("NEW Address Of K  =   %u\n",z);
    return 0;
}