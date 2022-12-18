#include<stdio.h>
void main()
{
    int i,a,b,sum=0,num=0;
    printf("Enter Min Number\n");
    scanf("%d",&a);
    printf("Enter Max Number\n");
    scanf("%d",&b);
    printf("Enter Number To Exclude In Sum :-");
    scanf("%d",&num);
    if(a<b){
    for(i=a;i<=b;i++)
    {
        if(i%num!=0)
        {
            sum=sum+i;
        }
    }
    printf("Sum=%d",sum);
    }
    else
    {
        printf("give ascending series");
    }
}