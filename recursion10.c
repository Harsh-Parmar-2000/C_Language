//  •	Generate nth Fibonacci term using recursion.
#include<stdio.h>
int fib(int,int,int);
int main()
{
    int val1,val2,term;
    printf("Enter 1st Value : ");
    scanf("%d",&val1);
    printf("Enter 1st Value : ");
    scanf("%d",&val2);
    printf("Enter How Many Term : ");
    scanf("%d",&term);
    fib(val1,val2,term);
}
int fib(int val1,int val2,int term)
{
    int sum=0;
    if(term>0)
    {
        sum=val1+val2;
        printf("%d ",val1);
    }
    fib(val2,sum,term-1);
}