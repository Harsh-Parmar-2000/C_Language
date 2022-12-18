/* Write a C program to display Pascal's triangle. 
 Test Data :
Input number of rows: 5
Expected Output :
    1
   1 1 
  1 2 1 
 1 3 3 1
1 4 6 4 1       */
#include<stdio.h>
int main()
{
    int row,coef=1,k=0,j,i;
    printf("Enter Number Of Rows : ");
    scanf("%d",&row);
    
    for(i=0;i<row;i++)
    {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
         if(j==0||i==0)
             coef=1;
         else
             coef=coef*(i-j+1)/j;
             printf("%d ",coef);  
        }
        printf("\n");
    }
}