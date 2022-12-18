//•	Print all strong numbers between the given interval using functions
#include<stdio.h>
int strong(int,int);
int main()
{
    int val=0,strt,end;
    printf("Enter A Starting Value : ");
    scanf("%d",&strt);
    printf("Enter A Ending Value : ");
    scanf("%d",&end);
    strong(strt,end);
}
int strong(int x,int y)
{
    int sum=0,fact=1,rem=0,val=0,i,num=0;
    for(i=x;i<=y;i++)
    {
        sum=0;
        num=i;
        while(num>0)
        {
            fact=1;
            rem=num%10;
            while(rem>0)
            {
                fact=fact*rem;
                rem--;
            }
            sum=sum+fact;
            num=num/10;
        }
        if(sum==i)
        {
            printf("%d ",sum);
        }
    }
}