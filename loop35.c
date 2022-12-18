/* Write a program in C to display the first n terms of Fibonacci series. 
Fibonacci series 0 1 2 3 5 8 13 .....
Test Data :
Input number of terms to display : 10
Expected Output :
Here is the Fibonacci series upto to 10 terms :
0 1 1 2 3 5 8 13 21 34      */
#include<stdio.h>
int main()
{
    int i,term=0,val1=0,val2=1,sum=0;
    printf("input Number Of Terms : ");
    scanf("%d",&term);
    printf("Here Is The Fibonacci Series : %d %d ",val1,val2);
    for(i=1;i<=term-2;i++)
    {
        sum=val1+val2;
        val1=val2;
        val2=sum;
        printf("%d ",sum);
    }
}