/* Write a program in C to make such a pattern like right angle triangle with 
number increased by 1 
 1
 2 3
 4 5 6
 7 8 9 10       */
#include<stdio.h>
int main()
{
    int i,sp,j,k=1,n=4;
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}
