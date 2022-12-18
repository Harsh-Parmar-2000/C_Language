//  •	Find the sum of each row and column of a matrix.
#include<stdio.h>
int main()
{
    int arr[10][10],sumr=0,sumc=0,m,i,j,n;
    printf("Enter How Many Row U Want :");
    scanf("%d",&m);
    
    printf("Enter How Many Column U Want :");
    scanf("%d",&n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

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
        sumr=0;
        sumc=0;
        for(j=0;j<n;j++)
        {
            sumr=sumr+arr[i][j];
            sumc=sumc+arr[j][i];
        }
        printf("sum of row =%d\n",sumr);
        printf("sum of column =%d\n",sumc);
    }
}