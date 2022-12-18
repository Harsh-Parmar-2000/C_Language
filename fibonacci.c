#include<stdio.h>
void main()
{
    int n,count,s=0,e=1,temp=0;
    printf("Enter How Many Numbers");
    scanf("%d",&n);
    printf("Fibonacci Series From %d To %d =%d  %d  ",s,e,s,e);
    count=2;
    while(count<=n)
    {
        temp=s+e;
        s=e;
        e=temp;
        printf("%d\t",temp);
        count++;
    }
}