//   Write a C program that reads two integers and checks whether they are multiplied or not.
#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if((b%a)==0)
    {
        printf("Multiplied");
    }
    else{
        printf("not multiplied");
    }
}