//  •	Right rotate an array.
#include<stdio.h>
int main()
{
    int c=3,n,arr[20],i,temp=0;
    printf("Enter How Much Element U Want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<c;j++)
    {
    temp=arr[n-1];
    for(i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    }
    printf("\nRight Rotate : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}