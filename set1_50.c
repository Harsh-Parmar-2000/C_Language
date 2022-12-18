/*Write a C program to read an array of length 5 
and print the position and value of the array elements of value less than 5.*/ 
#include<stdio.h>
void main()
{
    int i,num[5];
    printf("Enter Five Numbers");
    for(i=0;i<5;i++)
    {
    scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
    if(num[i]<5)
    {
        printf("N[%d] value=%d\n",i,num[i]);
    }
    }
    
}
