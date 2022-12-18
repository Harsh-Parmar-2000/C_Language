/*Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.*/
#include<stdio.h>
int main()
{
    int i,sum=0,div,num;
    printf("Enter A Number=");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("sum=%d",sum);
    if(sum==num)
    {
        printf("The Number Is Perfect");
    }
    if(sum!=num)
    {
        printf("So,The Number Is Not Perfect");
    }
}