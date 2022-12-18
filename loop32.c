/* Write a C program to determine whether a given number is prime or not. 
 Test Data :
Input a number: 13
Expected Output :
13 is a prime number    */
#include<stdio.h>
int main()
{
    int val=0,i,num=0,j,count=0;
    printf("Enter A Number : ");
    scanf("%d",&val);
    // for(i=1;i<=val;i++)
    // {
         num=val;
        for(j=2;j<num;j++)
        {
            if(num%j==0)
            {
                count++;
            }
        }
    // }
       if(count>0)
    {
    printf("%d is not a prime number\n",num);
    }
    else{
        printf("%d Is A Prime Number",num);
    }
}