//  •	Add two matrices.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter Elements Of First Array :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nEnter Elements Of second Array :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nSum Of Arrays Are :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}