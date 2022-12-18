//  •	Sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>
int nature(int,int,int);
int main()
{
    int s=0,n,i=1,j=0;
    printf("Enter End Value To Find Sum Of Natural Numbers :- ");
    scanf("%d",&n);
    s=nature(n,i+1,j);
    printf("sum of all natural number : %d",s);
}
int nature(int n,int i,int sum)
{
    if(n>i)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    else
        return sum;
    nature(n,i+1,sum);
}