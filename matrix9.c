//  •	Interchange diagonals of a matrix.
#include<stdio.h>
int main()
{
    int temp=0,i,j,m,n,arr[10][10];
    printf("Enter How Many Rows U want :");
    scanf("%d",&m);
    printf("Enter How Many Columns U want :");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nBefore Changing :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
            temp=arr[i][n-1-i];
            arr[i][n-1-i]=arr[i][j];
            arr[i][j]=temp;
            }
        }
    }
    printf("\nAfter Interchange \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}