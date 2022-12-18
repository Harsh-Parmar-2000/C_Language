//  •	Find gcd (HCF) of two numbers using recursion
#include<stdio.h>
int hcf(int,int);
int main()
{
    int val1,val2,sum=0;
    printf("Enter A Value : ");
    scanf("%d",&val1);
    printf("\nEnter Ending Value : ");
    scanf("%d",&val2);
    hcf(val1,val2);
}
int hcf(int val1,int val2)
{
    if(val1>val2)
    {
        val1=val1-val2;
    }
    else{
        val2=val2-val1;
    }
    if(val1==val2)
    {
        printf("HCF Of Two Numbers  %d",val1);
        return 0;
    }
    hcf(val1,val2);
}