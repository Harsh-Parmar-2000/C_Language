/*25. Write a program in C to display the n terms of square natural number and 
their sum. 
1 4 9 16 ... n Terms*/
#include<stdio.h>
int main()
{
    int i,sum=0,term,mul=0;
    printf("Enter How Many Terms =");
    scanf("%d",&term);
    for(i=1;i<=term;i++)
    {
        mul=i*i;
        printf("%d ",mul);
        sum=sum+mul;
    }
    printf("\n Sum=%d",sum);
}