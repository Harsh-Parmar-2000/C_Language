//  •	Check the symmetric matrix.
#include<stdio.h>
int main()
{
    int a[5][5],m,i,j,flag=0,b[5][5];
    printf("Enter Value (row = column)");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[i][j]!=a[i][j])
            {
                flag++;
            }
        }
    }
    if(flag==0)
        printf("Symmetric Matrix");
    else
        printf("Not A Symmetric");
}