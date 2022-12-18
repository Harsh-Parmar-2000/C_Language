/*  Write a C program to print the following characters in a reverse way. 
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX   */
#include<stdio.h>
int main()
{
    char a='x',b='m',c='l';
    printf("The Reverse Of %c%c%c is %c%c%c",a,b,c,c,b,a);
}