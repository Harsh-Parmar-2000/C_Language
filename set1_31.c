#include<stdio.h>
void main()
{
    int num;
    printf("Enter A Number\n");  
    scanf("%d",&num);

    if(num>0)
    {
        if(num%2==0)
        {
            printf("positive even");
        }
        else
        {
            printf("Positive Odd");
        }
    }
    else if(num<0)
    {
        if(num%2==0)
        {
            printf("Negative Even");
        }
        else{
            printf("negative Odd");
        }
    }
    else
    {
        printf("even");
    }
}