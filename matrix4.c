//  •	Multiply two matrices.
#include<stdio.h>
int main()
{
    int temp=0,a[3][3],b[3][3],c[3][3],i,k,sum=0,j;
    printf("Enter Elements Of First Array : ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter Elements Of Second Array : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nFirst Array : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSECOND Array : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication Of Two Array : \n");
    for(i=0;i<2;i++)
    {
        
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
            {
                temp=a[i][k]*b[k][j];
                sum=sum+temp;
            }
          c[i][j]=sum;   
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}