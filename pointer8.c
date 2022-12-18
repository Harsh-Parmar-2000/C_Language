//  •	Access two-dimensional array using pointers.
#include<stdio.h>
int main()
{
    int a[20][20],i,j,row,column;
    int *ptr;
    ptr=a;
    printf("Enter Row And Column Size :\n");
    scanf("%d%d",&row,&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",ptr);
            ptr++;
        }
    }
    ptr=a;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",*ptr);
            ptr++;
        }
        printf("\n");
    }
}