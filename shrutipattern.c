/*        1
         2 3
        4 5 6
       7 8 9 10 */

#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }

}
