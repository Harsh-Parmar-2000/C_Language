//	Print all perfect numbers between the given interval using functions.
#include<stdio.h>
int perfect(int,int);
int main()
{
    int x,y;
    printf("Input A Starting Point : ");
    scanf("%d",&x);
    printf("Input A Ending Point : ");
    scanf("%d",&y);
    perfect(x,y);
}
int perfect(int strt,int end)
{
    int i,sum=0,num=0,j=1;
    for(i=strt;i<=end;i++)
    {
        num=i;
        sum=0;
        j=1;
        while(num>j)
        {
            if(num%j==0)
            {
                sum=sum+j;
            }
            j++;
        }   
        if(sum==num)
        {
            printf("%d ",i);
        }
    }
}