#include<stdio.h>
void main()
{
    int i=1,num;
    printf("Enter A Number\n");
    scanf("%d",&num);

    for(i=1;i<=100;i++)
    {
        if(i%num==3)
        {
            printf("%d\n",i);
        }
    }
}