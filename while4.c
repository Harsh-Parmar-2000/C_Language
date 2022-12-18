// display fibonacci series by while loop
#include<stdio.h>
int main()
{
    int val,val2,term,count,sum=0;
    printf("Enter A Value\n");
    scanf("%d",&val);
    printf("Enter Second Value\n");
    scanf("%d",&val2);
    printf("Enter How Many Terms");
    scanf("%d",&term);
    count=2;
    printf("fibonacci series %d %d ",val,val2);
    while(count<=term)
    {
        sum=val+val2;;
        val=val2;
        val2=sum;
        printf("%d ",sum);
        count++;
    }
}