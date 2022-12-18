//  •	Find the sum of minor diagonal elements of a matrix
#include<stdio.h>
int main()
{
    int arr[10][10],i,j,sum=0,m,n;
    
    printf("Enter Elements Of Array :\n");
    scanf("%d",&m);
    printf("Enter Columns Of Array :\n");
    scanf("%d",&n);
    printf("Enter Elements Of Array :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\nArray :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    
    printf("Sum Of Diagonal Of Array :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n-1-i)
            {
                printf("%d ",arr[i][j]);
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}