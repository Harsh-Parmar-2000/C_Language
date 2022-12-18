#include<stdio.h>
void main()
{
    int num,i,rem,rev=0;
    printf("Enter A Number");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d",rev);
}