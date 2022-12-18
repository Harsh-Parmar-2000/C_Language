// Write a C program that reads an array (length 7) and print all array positions that store a value less or equal to 0
#include<stdio.h>
int main()
{
    int i,a[7];
    printf("Enter Seven Value\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        if(a[i]<=0)
        {
            printf("number %d Value %d\n",i,a[i]);
        }
    }
    return 0;
}