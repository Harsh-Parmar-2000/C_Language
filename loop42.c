/*Take a binary number as the input.
Divide the number by 10 and store the remainder into variable rem.
decimal_num = decimal_num + rem * base;
Initially, the decimal_num is 0, and the base is 1, where the rem variable stores the remainder of the number.
Divide the quotient of the original number by 10.
Multiply the base by 2.
Print the decimal of the binary number.*/
#include<stdio.h>
int main()
{
    int val,i,sum=0,base=1,rem=0;
    printf("Enter A Binary Number = ");
    scanf("%d",&val);
    for(i=0;val>0;i++)
    {
        rem=val%10;
        sum=sum+(rem*base);
        val=val/10;
        base=base*2;
    }
    printf("%d",sum);
}
















#include<stdio.h>
int main()
{
    int val=0,base=1,sum=0,rem=0;
    printf("Enter A Binary Value:\n");
    scanf("%d",&val);
    while(val)
    {
        rem=val%10;
        sum=sum+(rem*base);
        val=val/10;
        base=base*2;
    }
    printf("Decimal=%d",sum);
}