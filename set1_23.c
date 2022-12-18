#include<stdio.h>
int main()
{
    int i,a[5],sum=0;
    printf("enter five numbers=");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("The %d Number Is=%d\n",i,a[i]);
        if(a[i]%2!=0)
        {
            sum=sum+a[i];
        }
    }  
    printf("\nSUM OF ODD NO.=%d",sum);  
}