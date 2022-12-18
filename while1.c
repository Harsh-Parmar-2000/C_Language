// 	Reverse A given Number By While Loop
#include<stdio.h>
int main()
{
    int val,rem=0,sum=0;
    printf("Enter A Number\n");
    scanf("%d",&val);
    while(val>0)
    {
        rem=val%10;
        sum=sum*10+rem;
        val=val/10;
    }
    printf("%d",sum);
}