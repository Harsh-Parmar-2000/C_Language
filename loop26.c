/* 26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. 
n terms. */
#include<stdio.h>
int main()
{
    int i,mul=1,sum=0,term;
    printf("Enter How Many Terms\n");
    scanf("%d",&term);
    for(i=1;i<=term;i++)
    {
        printf("%d ",mul);
        sum=sum+mul;
        mul=mul*10+1;
    }
    printf("\nsum=%d",sum);
}