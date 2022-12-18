//  •	Copy all elements from an array to another array
#include<stdio.h>
int main()
{
    int n,arr[20],copy[20],i;
    printf("Enter How Many Element U Want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        copy[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",copy[i]);
    }
}