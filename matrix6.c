//  •	Sum of the main diagonal elements of a matrix.
#include<stdio.h>
int main()
{
    int arr[3][3],i,j,sum=0;
    printf("Enter Elements Of Array :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\nArray :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    
    printf("Sum Of Diagonal Of Array :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}