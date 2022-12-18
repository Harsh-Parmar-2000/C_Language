#include<stdio.h>
int main()
{
    int i=0,j=0,sub=0,a[3][3],b[3][3],c[i][j];
    
    printf("Enter First Matrix=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second Matrix=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    printf("First Matrix=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter second Matrix=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t",b[i][j]);
        }
        
        printf("\n");
    }
    printf("Substraction=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        printf("%d\t",c[i][j]);
        }
        
        printf("\n");
    }
}