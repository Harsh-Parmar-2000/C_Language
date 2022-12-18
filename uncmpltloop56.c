/*   Write a program in C to Check Whether a Number can be Express as Sum 
of Two Prime Numbers. 
Test Data :
Input a positive integer: 16
Expected Output :
16 = 3 + 13
16 = 5 + 11     */
#include<stdio.h>
int main()
{
    int val,k=0,j=0,i=2;
    printf("Input a positive integer : ");
    scanf("%d",&val);
    j=val;
    while(val>i)
    {
        k=i;
        
        while(j>0)
        {
            if(k%j!=0)
            printf("%d ",i);
            j--;
        }
        i++;
    }
}