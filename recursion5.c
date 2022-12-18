//•	Find the sum of all even or odd numbers in a given range using recursion.
#include<stdio.h>
int sumeven(int,int,int);
int sumodd(int,int,int);
int main()
{
    int strt,end,sum=0,even=0,odd=0;
    printf("Enter A Starting Value : ");
    scanf("%d",&strt);
    printf("\nEnter A Starting Value : ");
    scanf("%d",&end);
    even=sumeven(end,strt,sum);
    odd=sumodd(end,strt,sum);
    printf("\nSum Of Even Numbers = %d\n",even);
    printf("\nSum Of odd Numbers = %d\n",odd);
}
int sumeven(int x,int y,int sum)
{
    if(x>=y)
    {
        if(y%2==0)
        {
            sum=sum+y;
        }
    }
    else{
        return sum;
    }
    sumeven(x,y+1,sum);
}
int sumodd(int x,int y,int sum)
{
    if(x>=y)
    {
        if(y%2!=0)
        {
            sum=sum+y;
        }
    }
    else{
        return sum;
    }
    sumodd(x,y+1,sum);
}