/* Write a program in C to find the prime numbers within a range of 
numbers. 
Test Data :
Input starting number of range: 1
Input ending number of range : 50
Expected Output :
The prime number between 1 and 50 are :
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 */
#include<stdio.h>
int main()
{
    int end,strt,count=0,i,num=0,j;
    printf("Input Starting Number Of Range : ");
    scanf("%d",&strt);
    printf("Input Ending Number Of Range : ");
    scanf("%d",&end);
    for(i=strt;i<=end;i++)
    {
        num=i;
        count=0;
        for(j=2;j<num;j++)
        {
            if(num%j==0)
            {
              count++;
            }
        }
        if(count==0)
        {
            printf("%d ",num);
        }
    }
}