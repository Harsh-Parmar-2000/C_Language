//  •	Delete all duplicate elements from an array.
#include<stdio.h>
int main()
{
    int n,arr[20],i,j,k;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                } 
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
            printf("%d ",arr[i]);
    }
}