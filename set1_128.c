/* Write a C program that reads an array of integers (length 10), 
fill the array elements with number o to a (given number) n – 1 repeated times where 2 <= n <= 10*/
#include<stdio.h>
int main()
{
    int a[10],i,j=0,n;
    printf("Enter A Value\n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        a[i]=j;
        printf("Array Loc  %d Value=%d\n",i,a[i]);
        j=j+1;
        if(j==n)
        {
            j=0;
        }
    }
}