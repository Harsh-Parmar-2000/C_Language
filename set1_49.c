/*Write a C program to read and print the elements of an array of length 7, before print,
put the triple of the previous position starting from the second position of the array. */
#include<stdio.h>
void main()
{
    int i,num;
    printf("Enter A Number");
    scanf("%d",&num);
   
    for(i=0;i<7;i++)
        {
        printf("%d   ",num);
        num=num*3;
        }

}