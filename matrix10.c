//  •	The upper triangular matrix.
#include<stdio.h>
int main()
{
    int arr[10][10],i,j,m,n;
    printf("Enter How Many Row U Want : ");
    scanf("%d",&m);
    
    printf("Enter How Many Column U Want : ");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nArray=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nUpper Triangular Matrix =\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            {
                printf("%d\t",arr[i][j]);
            }
            else
            printf("  \t");
        }
        printf("\n");
    }
}