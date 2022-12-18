//•	Print all even or odd numbers in a given range using recursion
#include<stdio.h>
int even(int,int);
int odd(int,int);
int main()
{
    int strt,end;
    printf("Enter A Starting Range : ");
    scanf("%d",&strt);

    printf("Enter A Starting Range : ");
    scanf("%d",&end);
    printf("Even Numbers :- ");
    even(end,strt);
    printf("\nOdd Numbers :-\n");
    odd(end,strt);
}
int even(int n,int i)
{
    if(n>=i)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    else
    {
        return 0;
    }
    even(n,i+1);
}
int odd(int m,int j)
{
    if(m>=j)
    {
        if(j%2!=0)
        {
            printf("%d ",j);
        }
    }
    else{
        return 0;
    }
    odd(m,j+1);
}