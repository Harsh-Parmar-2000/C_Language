#include<stdio.h>
int main()
{
    int a[3][2],i,j;
    printf("enter digit in element=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix Is=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose Of Matrix =");
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",a[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}