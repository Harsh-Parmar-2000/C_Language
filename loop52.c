/*  Write a program in c to find the Sum of GP series. 
Test Data :
Input the first number of the G.P. series: 3
Input the number or terms in the G.P. series: 5
Input the common ratio of G.P. series: 2
Expected Output :
The numbers for the G.P. series:
3.000000 6.000000 12.000000 24.000000 48.000000
The Sum of the G.P. series : 93.000000  */
#include<stdio.h>
int main()
{
    float strt,term,rat,i,sum=0,count=1;
    printf("Input the first number of the G.P series : ");
    scanf("%f",&strt);
    printf("Input the number of terms in the g.p series : ");
    scanf("%f",&term);
    printf("input the common ratio of G.P series : ");
    scanf("%f",&rat);
    for(i=strt;count<=term;i=i*rat)
    {
        printf("%f ",i);
        sum=sum+i;
        count++;
    }
    printf("Sum= %f",sum);
}