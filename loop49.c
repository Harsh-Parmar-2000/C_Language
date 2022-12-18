/*  Write a c program to find out the sum of an A.P. series. 
Test Data :
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 10
Input the common difference of A.P. series: 4
Expected Output :
The Sum of the A.P. series are :
1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190  */
#include<stdio.h>
int main()
{
    int strt,term,diff,i,sum=0,count=1;
    printf("Input the starting number of the A.P series : ");
    scanf("%d",&strt);
    printf("Input the number of items for the A.P series : ");
    scanf("%d",&term);
    printf("Input the starting number of the A.P series : ");
    scanf("%d",&diff);
    printf("The Sum Of The A.P series are : ");
    for(i=strt;count<=term;i=i+diff)
    {
        printf("%d + ",i);
        sum=sum+i;
        count++;
    }
    printf("\nSum= %d",sum);
}