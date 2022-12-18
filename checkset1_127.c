/* Write a C program that reads an array of integers (length 8),
 replace the 1st element by the 8th, 2nd by the 7th and so on. Print the final array. */
#include<stdio.h>
#define N 8
int main()
{
    int i,s,ctr=0,a[N];
    printf("Enter Eight Value\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=(N/2)-1;i++)
    {
       s=a[N-i];
       a[N-i]=a[i];
       a[i]=s;
    }
    printf("Reverse=");
    for(i=0;ctr<N;++i)
    {
        printf("%d\n",a[i]);
        ctr++;
    }
}