//  •	Identity matrix in C.
#include<stdio.h>
int main()
{
    int arr[15][15],m,i,j;
    printf("Enter Size Of Array :");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=0;
            }
        }
    }
    printf("\nIdentity Matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}