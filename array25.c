//  •	Sort array elements in ascending or descending order.
#include<stdio.h>
int main()
{
    int n,arr[20],i,temp=0,j;
    printf("Enter Size Of Array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("\nArray In Ascending Order :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nArray In Descending Order :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}