// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 
#include<stdio.h>
int main()
{
    int sum=0,i,n,div=0;
    printf("Enter How Many Terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        div=(div*10)+9;
        sum=sum+div;    
    }
    printf("sum=%d",sum);

}