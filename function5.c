//•	Check whether a number is prime, Armstrong or perfect number using functions.
#include<stdio.h>
int prime(int);
int armstrong(int);
int perfect(int);
int main()
{
    int val;
    printf("Enter A Value =");
    scanf("%d",&val);
    prime(val);
    armstrong(val);
    perfect(val);
    return 0;
}
int prime(int x)
{
    int i,count=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            count++;   
        }
    }
    if(count==0)
    printf("Prime\n");
    else{
        printf("Not prime\n");
    }
}
int armstrong(int x)
{
    int y=0,rem=0,sum=0;
    y=x;
    while(y>0)
    {
        rem=y%10;
        sum=sum+rem*rem*rem;
        y=y/10;
    }
    if(sum==x)
    {
        printf("Armstrong");
    }
    else{
        printf("Not a Armstrong");
    }
}
int perfect(int x)
{
    int i,rem=0,sum=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==x)
    {
        printf("Perfect");
    }
    else{
        printf("Not Perfect");
    }
}
// prime number upto n terms
#include<stdio.h>
int pr(int,int);
int main()
{
    int val1,val2;
    printf("Enter A Number\n");
    scanf("%d%d",&val1,&val2);
    pr(val1,val2);
}
int pr(int strt,int end)
{
    int i,num=0,j,count=0;
    for(i=strt;i<end;i++)
    {
        num=i;
        count=0;
        for(j=2;j<num;j++)
        {
            if(num%j==0)
            {
                count=1;
            }
        }
        if(count==0)
        {
            printf("%d ",i);
        }
    }
}