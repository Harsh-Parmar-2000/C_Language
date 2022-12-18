// Write a C program that reads seven integer values from the user and find the highest value and it’s position. 
#include<stdio.h>
int main()
{
    int a[7],i,b,max=0;
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            b=i+1;
        }
    }
    printf("%d  %d",b,max);
}