//  •	Check whether two matrices are equal or not.
#include<stdio.h>
int main()
{
    int i,j,flag=0,a[3][3],b[3][3];
    printf("\nEnter Elements Of First Matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter Elements Of Second Matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nFirst Matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                flag++;
            }            
        }
    }
    if(flag==0)
    {
        printf("Matrix Is Equal");
    }
    else{
        printf("Not Equal");
    }
}