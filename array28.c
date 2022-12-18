//  •	Left rotate an array.
#include<stdio.h>
int main()
{
    int n,arr[20],i,temp=0;
    printf("Enter How Much Element U Want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("\nRight Rotate : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}