/*  Write a C program that accepts two integers from the user and calculate the sum of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63  */
#include<stdio.h>
int main()
{
    int a,b;
    printf("Input The First Integer : ");
    scanf("%d",&a);
    printf("Input The First Integer : ");
    scanf("%d",&b);
    printf("Sum Of The Above Two Integers = %d",a+b);
}