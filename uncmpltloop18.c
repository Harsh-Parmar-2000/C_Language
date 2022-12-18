// Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!-......
#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,m=1,term;
    float div=0,fact=1,y=0,k,sum=1;
    printf("Enter A Value\n");
    scanf("%d",&x);
    printf("Enter A Term\n");
    scanf("%d",&term);
    for(i=2;term>0;i+=2)
    {
        fact=1;
        y=pow(x,i);
        for(k=2;k<=i;k++)
        {
        fact=fact*k;
        }
        div=y/fact;
        sum=sum-div*(m*(-m));
        term--;
    }
    printf("sum=%f",sum);
}