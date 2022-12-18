//  •	Find reverse of any number using recursion.
#include<stdio.h>
int reverse(int,int,int);
int main()
{
    int val,rev=0;
    int rem=0,sum=0;
    printf("Enter A Value To Find It's Reverse = ");
    scanf("%d",&val);
    rev=reverse(val,rem,sum);
    printf("\nThe Reverse Of Given Number = %d",rev);
}
int reverse(int x,int rem,int sum)
{
    if(x>0)
    {
        rem=x%10;
        sum=sum*10+rem;
    }
    else
    {
        return sum;
    }
    reverse(x/10,rem,sum);
}