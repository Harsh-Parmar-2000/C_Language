// Write a program in C to display the n terms of harmonic series and their sum
// 1+1/2+1/3+1/4.....i/n terms

#include<stdio.h>
int main()
{
    int n;
    double i,sum=0;
    printf("How Many Terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1/i;
    }
    printf("Sum=%lf",sum);
}
