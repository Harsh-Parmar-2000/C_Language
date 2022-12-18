#include<stdio.h>
int main()
{
    int a,b,no=0,temp=0;
    float i,sum=0,avg=0;
    printf("Enter Start Value & End Value\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a;i<=b;i++)
    {
        printf("%.0f ",i);
        sum=sum+i;
        no=no+1;
    }
    avg=sum/no;
    printf("AVERAGE=%f",avg);

}