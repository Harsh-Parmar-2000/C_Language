/*  Write a program in C to print a string in reverse order. 
Test Data :
Input a string to reverse : Welcome
Expected Output :
Reversed string is: emocleW */
#include<stdio.h>
int main()
{
    char name[10];
    
    int i;
    
    gets(name);
    for(i=6;i>=0;i--)
    printf("%c",name[i]);
}