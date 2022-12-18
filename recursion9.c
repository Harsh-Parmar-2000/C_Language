//  •	Find factorial of any number using recursion
#include<stdio.h>
int fact(int,int);
int main()
{
    int fac=0,n,sum=1;
    printf("Enter A Number : ");
    scanf("%d",&n);
    fac=fact(n,sum);
    printf("\nFactorial Of %d Is %d",n,fac);
}
int fact(int n,int sum)
{
    if(n>0)
    {
        sum=sum*n;
    }
    else{
        return sum;
    }
    fact(n-1,sum);
}