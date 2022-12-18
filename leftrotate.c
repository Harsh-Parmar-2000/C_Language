#include<stdio.h>
int main()
{
    int temp=0,arr[20],n,i,j,k=3,l;
    printf("Enter Size :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(l=1;l<=k;l++)
    {
    temp=arr[0];
    for(j=0;j<n;j++)
    {
        arr[j]=arr[j+1];
    }
    arr[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}