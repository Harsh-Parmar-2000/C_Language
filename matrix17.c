//  •	Check the sparse matrix.
#include<stdio.h>
int main()
{
    int arr[10][10],i,j,m;
    float all=0,flag=0;
    printf("Enter How Many Row Or Column U Want (sqr)");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                flag++;
            }
            all++;
        }
    }
    float div=(flag/all)*100;
    if(div>50)
    {
        printf("Matrix Is Sparse \nSparse percentange %f",(flag/all)*100);
    }
    else
    printf("Matrix Is Not A Sparse");

}