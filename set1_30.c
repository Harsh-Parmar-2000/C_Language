#include<stdio.h>
int main()
{
    int i,num=1,sqr=0;
    printf("Enter Last Value For Square ");

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
           sqr=i*i;
           printf("%d^2=%d\n",i,sqr);    
        }
    }
}