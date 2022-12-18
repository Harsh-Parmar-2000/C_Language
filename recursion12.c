//  •	Find lcm of two numbers using recursion
#include<stdio.h>
int hcf(int,int);
int main()
{
    int s=0,lcm=0,a=0,b=0,val1,val2,sum=0;
    printf("Enter A Value : ");
    scanf("%d",&val1);
    printf("\nEnter Ending Value : ");
    scanf("%d",&val2);
    a=val1;
    b=val2;
    s=hcf(val1,val2);
    lcm=(a*b)/s;
    printf("LCM = %d",lcm);

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
        return val1;
    }
    hcf(val1,val2);
}