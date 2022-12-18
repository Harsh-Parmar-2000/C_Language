/* Write a program in C to display the pattern like a diamond. 
    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    *           */
#include<stdio.h>
int main()
{
    int i,j,k,v=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<2*i;k++)
        {
            printf("*");
        }
    printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<2*i;k++)
        {
            printf("*");
        }
    printf("\n");
    }
}