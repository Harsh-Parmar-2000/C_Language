//  •	The transpose of a matrix.
#include<stdio.h>
int main()
{
    int arr[10][10],m,n,i,j;
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
    printf("\nTranspose Of An Array=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
}