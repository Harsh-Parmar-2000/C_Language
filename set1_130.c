/* Write a C program to create an array of length n and 
fill the array elements with integer values. Now find the smallest value and it’s position */
#include<stdio.h>
int main()
{
    int i,N,max;
    printf("Enter Array Length\n");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<N;i++)
    {
        if(a[i]<max)
        {
            max=a[i];
        }
    }
    printf("MAXIMUM=%d",max);
}