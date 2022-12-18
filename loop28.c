/*Input the starting range or number : 1
Input the ending range of number : 50
Expected Output :
The Perfect numbers within the given range : 6 28*/
#include<stdio.h>
int main()
{
    int a,b,n=0,i,sum=0,j;
    printf("Input the Start Or End Point = ");
    scanf("%d%d",&a,&b);
    printf("The Perfect Numbers within the given range : ");
    for(i=a;i<=b;i++)
    {
        sum=0;
        n=i;
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}