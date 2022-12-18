/*Write a C program to compute the sum of the two given integer values. 
If the two values are the same, then return triple their sum.  
Expected Output:
3
12          */
#include<stdio.h>
int main()
{
    int sum=0,val1,val2;
    printf("Enter Two Values = ");
    scanf("%d%d",&val1,&val2);
    sum=val1+val2;
    if(val1==val2)
    {
        printf("%d",sum*3);
    }
    else{
        printf("%d",sum);
    }
}