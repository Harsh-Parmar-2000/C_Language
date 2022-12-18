//  •	Put even and odd elements of an array in two separate arrays
#include<stdio.h>
int main()
{
    int n,even[20],i,odd[20],arr[20],j=0,k=0;
    printf("Enter How Much Element U Want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else{
            odd[k]=arr[i];
            k++;
        }
    }
    printf("\nEven Number Array :\n");
    for(i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nOdd Number Array :\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }
}
