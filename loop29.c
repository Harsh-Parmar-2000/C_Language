/*Input a number: 153
Expected Output :
153 is an Armstrong number*/
#include<stdio.h>
int main()
{
    int num=0,sum=0,val=0,arm=0;
    printf("Enter A Value To Check A No. Is Armstrong Or Not\n");
    scanf("%d",&val);
    num=val;
    while(num>0)
    {
    arm=num%10;
    sum=sum+(arm*arm*arm*arm);
    num=num/10;
    }
    if(sum==val)
    {
        printf("%d Is An Armstrong Number",val);
    }
    else{
        printf("Not a Armstrong");
    }
}