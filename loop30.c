/*Input starting number of range: 1
Input ending number of range : 1000
Expected Output :
Armstrong numbers in given range are: 1 153 370 371 407*/
#include<stdio.h>
int main()
{
    int strt,end,num=0,sum=0,rem=0,i,j;
    printf("Enter A Starting Point & Ending Point : ");
    scanf("%d%d",&strt,&end);
    printf("Armstrong Number In Given Range Are : ");
    for(i=strt;i<=end;i++)
    {
        num=i;
        sum=0;
        while(num>0)
        {
            rem=num%10;
            sum=sum+rem*rem*rem;
            num=num/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}